@ -0,0 +1,247 @@
// Copyright (c) 2024 Raspberry Pi (Trading) Ltd.

// Drive a ST7789 SPI LCD using the HSTX. The SPI clock rate is fully
// independent of (and can be faster than) the system clock.

// You'll need an LCD module for this example. It was tested with: WaveShare
// 1.3 inch ST7789 module. Wire up the signals as per PIN_xxx defines below,
// and don't forget to connect GND and VCC to GND/3V3 on your board!
//
// Theory of operation: Each 32-bit HSTX record contains 3 x 8-bit fields:
//
// 27:20  CSn x8    (noninverted CSn pin)
// 17:10  !DC x 8   (inverted DC pin)
//  7: 0  data bits (DIN pin)
//
// SCK is driven by the HSTX clock generator. We do issue extra clocks whilst
// CSn is high, but this should be ignored by the display. Packing the
// control lines in the HSTX FIFO records makes it easy to drive them in sync
// with SCK without having to reach around and do manual GPIO wiggling.

#include "pico/stdlib.h"
#include "pico/multicore.h"
#include "pico/util/queue.h"
#include "hardware/vreg.h"
#include "hardware/resets.h"
#include "hardware/regs/qmi.h"
#include "hardware/clocks.h"
#include "hardware/structs/qmi.h"
#include "hardware/structs/clocks.h"
#include "hardware/structs/hstx_ctrl.h"
#include "hardware/structs/hstx_fifo.h"

// These can be any permutation of HSTX-capable pins:
#define PIN_DIN   12
#define PIN_SCK   13
#define PIN_CS    14
#define PIN_DC    15
// These can be any pin:
#define PIN_RESET 16
//#define PIN_BL    17

#define FIRST_HSTX_PIN 12
#if   PIN_DIN < FIRST_HSTX_PIN || PIN_DIN >= FIRST_HSTX_PIN + 8
#error "Must be an HSTX-capable pin: DIN"
#elif PIN_SCK < FIRST_HSTX_PIN || PIN_SCK >= FIRST_HSTX_PIN + 8
#error "Must be an HSTX-capable pin: SCK"
#elif PIN_CS  < FIRST_HSTX_PIN || PIN_CS  >= FIRST_HSTX_PIN + 8
#error "Must be an HSTX-capable pin: CS"
#elif PIN_DC  < FIRST_HSTX_PIN || PIN_DC  >= FIRST_HSTX_PIN + 8
#error "Must be an HSTX-capable pin: DC"
#endif
#define SYS_CLK	315000
//#define SYS_CLK	96000
uint16_t frame_buffer[2][128*128] = {0xFFFF};
bool draw_buffer = false;
#define DUMMY_FLAG_VALUE 1
static inline void hstx_put_word(uint32_t data) {
	while (hstx_fifo_hw->stat & HSTX_FIFO_STAT_FULL_BITS)
		;
	hstx_fifo_hw->fifo = data;
}

static inline void lcd_put_dc_cs_data(bool dc, bool csn, uint8_t data) {
	hstx_put_word(
		(uint32_t)data |
		(csn ? 0x0ff00000u : 0x00000000u) |
		// Note DC gets inverted inside of HSTX:
		(dc  ? 0x00000000u : 0x0003fc00u)
	);
}

static inline void lcd_start_cmd(uint8_t cmd) {
	lcd_put_dc_cs_data(false, true, 0);
	lcd_put_dc_cs_data(false, false, cmd);
}

static inline void lcd_put_data(uint32_t data) {
	lcd_put_dc_cs_data(true, false, data);
}

// Format: cmd length (including cmd byte), post delay in units of 5 ms, then cmd payload
// Note the delays have been shortened a little
#define SCREEN_W 128
#define SCREEN_H 128
#define COLOR_ORDER 0
static const uint8_t ssd1351_init_seq[] = {
        2, 1, 0xFD, 0x12,               // Unlock IC MCU interface
        2, 1, 0xFD, 0xB1,               // A2,B1,B3,BB,BE,C1
        1, 1, 0xAE,                     // Display off
        4, 1, 0xB2, 0xA4, 0x00, 0x00,   // DISPLAY_ENHANCEMENT
        2, 1, 0xB3, 0xF1,               // Clock divider F1 or F0
        2, 1, 0xCA, 0x7F,               // Mux Ratio
        2, 1, 0xA0, 0x74,               // Segment remapping
        2, 1, 0xA1, 0x00,               // Set display start line
        2, 1, 0xA2, 0x00,               // Set display offset
        2, 1, 0xB5, 0x00,               // Set GPIO
        2, 1, 0xAB, 0x01,               // Function Select
        2, 1, 0xB1, 0x32,               // Precharge 
        2, 1, 0xBB, 0x1F,               // Precharge Level
        2, 1, 0xBE, 0x05,               // Set VcomH Charge
        1, 1, 0xA6,                     // Normal Display
        2, 1, 0xC7, 0x0A,               // Contrast Master
        4, 1, 0xC1, 0xFF, 0xFF, 0xFF,   // Constrast RGB
        4, 1, 0xB4, 0xA0, 0xB5, 0x55,   // Set segment low voltage
        2, 1, 0xB6, 0x01,               // Precharge 2
        1, 1, 0xA6,
        1, 1, 0xAF,                     // Display ON
};

static inline void lcd_write_cmd(const uint8_t *cmd, size_t count) {
    lcd_start_cmd(*cmd++);
    if (count >= 2) {
        for (size_t i = 0; i < count - 1; ++i) {
            lcd_put_data(*cmd++);
        }
    }
}

static inline void lcd_init(const uint8_t *init_seq) {
    const uint8_t *cmd = init_seq;
    while (*cmd) {
        lcd_write_cmd(cmd + 2, *cmd);
        sleep_ms(*(cmd + 1) * 5);
        cmd += *cmd + 2;
    }
}

static inline void lcd_start_pixels(void) {
    uint8_t cmd = 0x5C; // RAMWR
    lcd_write_cmd(&cmd, 1);
}
void init_hstx(){
    // Switch HSTX to USB PLL (presumably 48 MHz) because clk_sys is probably
    // running a bit too fast for this example -- 48 MHz means 48 Mbps on
    // PIN_DIN. Need to reset around clock mux change, as the AUX mux can
    // introduce short clock pulses:
    reset_block(RESETS_RESET_HSTX_BITS);
    hw_write_masked(
        &clocks_hw->clk[clk_hstx].ctrl,
        CLOCKS_CLK_HSTX_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB << CLOCKS_CLK_HSTX_CTRL_AUXSRC_LSB,
        CLOCKS_CLK_HSTX_CTRL_AUXSRC_BITS
    );
    hw_set_bits(
        &clocks_hw->clk[clk_hstx].div, 
        2<<CLOCKS_CLK_HSTX_DIV_INT_LSB // keep the hstx clock div as 2  as the max spi clock is 24mhz 
    );
    /*hw_write_masked(
		&clocks_hw->clk[clk_hstx].div,
		3 << CLOCKS_CLK_HSTX_DIV_INT_LSB,
		CLOCKS_CLK_HSTX_DIV_INT_BITS
	);*/
   
    unreset_block_wait(RESETS_RESET_HSTX_BITS);
    
    gpio_init(PIN_RESET);
    //gpio_init(PIN_BL);
    gpio_set_dir(PIN_RESET, GPIO_OUT);
    //gpio_set_dir(PIN_BL, GPIO_OUT);
    gpio_put(PIN_RESET, 1);
    //gpio_put(PIN_BL, 1);

    hstx_ctrl_hw->bit[PIN_SCK - FIRST_HSTX_PIN] =
        HSTX_CTRL_BIT0_CLK_BITS;

    hstx_ctrl_hw->bit[PIN_DIN - FIRST_HSTX_PIN] =
        (7u << HSTX_CTRL_BIT0_SEL_P_LSB) |
        (7u << HSTX_CTRL_BIT0_SEL_N_LSB);

    hstx_ctrl_hw->bit[PIN_CS - FIRST_HSTX_PIN] =
        (27u << HSTX_CTRL_BIT0_SEL_P_LSB) |
        (27u << HSTX_CTRL_BIT0_SEL_N_LSB);

    hstx_ctrl_hw->bit[PIN_DC - FIRST_HSTX_PIN] =
        (17u << HSTX_CTRL_BIT0_SEL_P_LSB) |
        (17u << HSTX_CTRL_BIT0_SEL_N_LSB) |
        (HSTX_CTRL_BIT0_INV_BITS);

    // We have packed 8-bit fields, so shift left 1 bit/cycle, 8 times.
    hstx_ctrl_hw->csr =
        HSTX_CTRL_CSR_EN_BITS |
        (31u << HSTX_CTRL_CSR_SHIFT_LSB) |
        (8u << HSTX_CTRL_CSR_N_SHIFTS_LSB) |
        (1u << HSTX_CTRL_CSR_CLKDIV_LSB);

    gpio_set_function(PIN_SCK, 0/*GPIO_FUNC_HSTX*/);
    gpio_set_function(PIN_DIN, 0/*GPIO_FUNC_HSTX*/);
    gpio_set_function(PIN_CS,  0/*GPIO_FUNC_HSTX*/);
    gpio_set_function(PIN_DC,  0/*GPIO_FUNC_HSTX*/);

    lcd_init(ssd1351_init_seq);
}
void init_sys(){
    vreg_set_voltage(VREG_VOLTAGE_MAX);
	sleep_ms(1);
    set_sys_clock_khz(SYS_CLK, true);
    stdio_init_all();
}
typedef struct
{
    void (*func)();
} queue_entry_t;

queue_t call_queue;
queue_t results_queue;
void core1_hstx_fn(){
    bool local_draw_buffer = !draw_buffer;
    lcd_start_pixels();
    for (uint16_t i = 0; i < SCREEN_H*SCREEN_W; ++i) {
        uint16_t rgb = frame_buffer[local_draw_buffer][i];
        lcd_put_data(rgb >> 8);
        lcd_put_data(rgb & 0xff);
    }
}
void core1_hstx(){
    while (true){
        queue_entry_t entry;
        queue_remove_blocking(&call_queue, &entry);
        entry.func();
    }
}

int main() {
    init_sys();
    init_hstx();
    queue_init(&call_queue, sizeof(queue_entry_t), 2);

    multicore_launch_core1(core1_hstx);
    queue_entry_t entry = {core1_hstx_fn};
   
    
    sleep_ms(10);
    uint t = 0;
    while (1){
        draw_buffer = !draw_buffer;
        for (uint y = 0; y < SCREEN_H; ++y) {
            for (uint x = 0; x < SCREEN_W; ++x) {
                uint16_t r = (x + t) & 0x1f;
                uint16_t b = (y - t) & 0x1f;
                uint16_t g = (x + y + (t >> 1)) & 0x3f;
                uint16_t rgb = (r << 11) + (g << 5) + b;
                frame_buffer[draw_buffer][y|(x<<7)]=rgb;
            }
        }
        queue_add_blocking(&call_queue, &entry);
        ++t;
    }
}