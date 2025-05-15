#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../runtime.h"
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
#define SYS_CLK	333000
// These can be any permutation of HSTX-capable pins:

// Format: cmd length (including cmd byte), post delay in units of 5 ms, then cmd payload
// Note the delays have been shortened a little
#define SCREEN_W 160
#define SCREEN_H 160
#define COLOR_ORDER 0
w4_Memory w4_memory;
uint16_t from_rgb8(uint32_t rgb){
    return (rgb & 0x1F) | ((rgb >> 3) & 0xE0) | ((rgb>>5) & 0xF800);
}
static bool draw_buffer = false;
uint16_t frame_buffer[2][SCREEN_H*SCREEN_W] = {0};

typedef struct
{
    void (*func)();
} queue_entry_t;

queue_t call_queue;
void core1_hstx_fn(){
    bool local_draw_buffer = !draw_buffer;
    lcd_start_pixels();
    for (uint16_t i = 0; i < SCREEN_H; ++i) {
        for (uint16_t j = 0; j < SCREEN_W; ++j) {
            uint16_t rgb = frame_buffer[local_draw_buffer][(i*SCREEN_H)+j];
            lcd_put_data(rgb >> 8);
            lcd_put_data(rgb & 0xff);
        }
    }
    sleep_ms(1);
}
void core1_hstx(){
    while (true){
        queue_entry_t entry;
        queue_remove_blocking(&call_queue, &entry);
        entry.func();
    }
}

void platform_init(void){
    vreg_set_voltage(VREG_VOLTAGE_MAX);
	sleep_ms(1);
    set_sys_clock_khz(SYS_CLK, true);
    stdio_init_all();
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

    queue_init(&call_queue, sizeof(queue_entry_t), 1);

    multicore_launch_core1(core1_hstx);
}
bool platform_update(void){
    fprintf(stderr, "update\n");
    return true;
}
void platform_deinit(void){
    
}
void platform_draw(void) {
    queue_entry_t entry = {core1_hstx_fn};
    uint32_t *palette = w4_memory.palette;
    uint16_t palette_conv[4] = {
        from_rgb8(palette[0]),
        from_rgb8(palette[1]),
        from_rgb8(palette[2]),
        from_rgb8(palette[3]),
    };
    int n = 0;
    for (int y = 0; y < SCREEN_H; y++) {
        uint16_t *out = &frame_buffer[draw_buffer][y*SCREEN_H];
        for (int x = 0; x < SCREEN_W; x+=4, n++) {
            uint8_t quartet = w4_memory.framebuffer[n];
            int color1 = (quartet & 0b00000011) >> 0;
            int color2 = (quartet & 0b00001100) >> 2;
            int color3 = (quartet & 0b00110000) >> 4;
            int color4 = (quartet & 0b11000000) >> 6;

            frame_buffer[draw_buffer][(y*SCREEN_H)+x] = palette_conv[color1];
            frame_buffer[draw_buffer][(y*SCREEN_H)+x+1] = palette_conv[color2];
            frame_buffer[draw_buffer][(y*SCREEN_H)+x+2] = palette_conv[color3];
            frame_buffer[draw_buffer][(y*SCREEN_H)+x+3] = palette_conv[color4];
            if (n > 5120)
                break;
            if ((n%40)> 32)
                break;
        }
        n+=8;
        if (n > 5120)
            break;
    } 
    draw_buffer = !draw_buffer;
    queue_add_blocking(&call_queue, &entry);
}
/*
void* platform_init_alloc(uint32_t len){
    return malloc(len);
}
*/