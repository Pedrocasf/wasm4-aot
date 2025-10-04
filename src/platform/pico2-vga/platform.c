#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "platform.h"
#include "../../runtime.h"
#include "../../runtime.h"
#include "pico/stdlib.h"
#include "pico/multicore.h"
#include "pico/util/queue.h"
#include "hardware/vreg.h"
#include "hardware/resets.h"
#include "hardware/regs/qmi.h"
#include "hardware/clocks.h"
#include "hardware/structs/qmi.h"
#include "hardware/dma.h"
#include "pico/scanvideo.h"
#include "hardware/structs/clocks.h"
#include "pico/scanvideo/composable_scanline.h"
#define vga_mode vga_mode_213x160_60
#define SYS_CLK	300000
#define SCREEN_W 160
#define SCREEN_H 160
w4_Memory w4_memory;
uint16_t from_rgb8(uint32_t rgb){
    return (rgb & 0x1F) | ((rgb >> 3) & 0x3E0) | ((rgb>>6) & 0x7C00);
}
static bool draw_buffer = false;
uint16_t fb[SCREEN_H*SCREEN_W] = {0};
typedef struct{
    void (*func)();
} queue_entry_t;
queue_t call_queue;
void core1_vga(){
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
    scanvideo_setup(&vga_mode);
    scanvideo_timing_enable(true);
    queue_init(&call_queue, sizeof(queue_entry_t), 1);
    multicore_launch_core1(core1_vga);
}

void core1_draw(void) {
    for(;;){
        scanvideo_wait_for_vblank();
        uint32_t *palette = w4_memory.palette;
        uint16_t palette_conv[4] = {
            from_rgb8(palette[0]),
            from_rgb8(palette[1]),
            from_rgb8(palette[2]),
            from_rgb8(palette[3]),
        };
        int n = 0;
        for (int y = 0; y < SCREEN_H; y++) {
            struct scanvideo_scanline_buffer *buffer = scanvideo_begin_scanline_generation(true);
            uint16_t *p = (uint16_t *) buffer->data;
            *p++ = COMPOSABLE_RAW_RUN;
            *p++ = fb[y* SCREEN_W];
            *p++ = SCREEN_W;
            for (int x = 0; x < SCREEN_W; x+=4, n++) {
                uint8_t quartet = w4_memory.framebuffer[n];
                int color1 = (quartet & 0b00000011) >> 0;
                int color2 = (quartet & 0b00001100) >> 2;
                int color3 = (quartet & 0b00110000) >> 4;
                int color4 = (quartet & 0b11000000) >> 6;

                *p++ = palette_conv[color1];
                *p++ = palette_conv[color2];
                *p++ = palette_conv[color3];
                *p++ = palette_conv[color4];
                //if (n > 5120)
                //    break;
                //if ((n%40)> 32)
                //    break;
            }
            /*for (size_t i = SCREEN_W; i < vga_mode.width; i++){
                *p++ = 0;
            }*/
            p[SCREEN_W+3]  = COMPOSABLE_EOL_SKIP_ALIGN;
            p[SCREEN_W+4]  = 0;
            buffer->data_used = (vga_mode.width + 6)>>1;
            buffer->status = SCANLINE_OK;
            scanvideo_end_scanline_generation(buffer);
            //n+=8;
            //if (n >= 5120)
            //    break;
            };
        
        
        }
}
void platform_draw(void){
    queue_entry_t entry = {core1_draw};
    queue_add_blocking(&call_queue, &entry);
}
bool platform_update(void){
    fprintf(stderr, "update\n");
    return true;
}
void platform_deinit(void){
    
}
void* platform_init_alloc(uint32_t len){

}