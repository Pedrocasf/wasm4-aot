#include <stdint.h>
#include "runtime.h"
#include "stdlib.h"
#include "platform_shim.h"
#include "wasm-cart.h"

typedef uint32_t u32;
uint8_t *w4_memory_raw = (uint8_t*) &w4_memory;

#ifdef BUILD_USE_WASM2C
#include "wasm-rt-impl.c"
#include "wasm-rt-std.c"

wasm_rt_memory_t wasm_shim_memory = {
    (uint8_t*) &w4_memory, 1, 1, 65536
};

__attribute__((weak)) 
void Z_cartZ_start(struct Z_env_instance_t *env) {

}
__attribute__((weak)) 
void Z_cartZ__start(struct Z_env_instance_t *env) {

}
__attribute__((weak)) 
void Z_cartZ__initialize(struct Z_env_instance_t *env) {

}
#endif

#ifdef BUILD_USE_W2C2
static wasmMemory wasm_shim_memory = {
    (uint8_t*) &w4_memory, 1, 1, 65536
};
wasmMemory *env__memory = &wasm_shim_memory;

static void e_dummy(void) {

}

void trap(Trap t) {
    abort();
}

// Some WASM-4 cartridges don't come with e_start.
void (*e_start)(void) __attribute__((weak)) = e_dummy;
void (*e_X5Fstart)(void) __attribute__((weak)) = e_dummy;
void (*e_X5Finitialize)(void) __attribute__((weak)) = e_dummy;
//void (*e_update)(void) __attribute__((weak)) = e_dummy;
#endif

#define AS_NATIVE_PTR(x) (((uint8_t*) &w4_memory) + (x))

// wasm2c format: Z_envZ_x
// w2c2 format: env__x

#ifdef BUILD_USE_WASM2C
// void w4_runtimeBlit (const uint8_t* sprite, int x, int y, int width, int height, int flags);
void Z_envZ_blit(struct Z_env_instance_t* env, u32 sprite, u32 x, u32 y, u32 width, u32 height, u32 flags) {
    w4_runtimeBlit(AS_NATIVE_PTR(sprite), x, y, width, height, flags);
}

// void w4_runtimeBlitSub (const uint8_t* sprite, int x, int y, int width, int height, int srcX, int srcY, int stride, int flags);
void Z_envZ_blitSub(struct Z_env_instance_t* env, u32 sprite, u32 x, u32 y, u32 width, u32 height, u32 srcX, u32 srcY, u32 stride, u32 flags) {
    w4_runtimeBlitSub(AS_NATIVE_PTR(sprite), x, y, width, height, srcX, srcY, stride, flags);
}

// void w4_runtimeLine (int x1, int y1, int x2, int y2);
void Z_envZ_line(struct Z_env_instance_t* env, u32 x1, u32 y1, u32 x2, u32 y2) {
    w4_runtimeLine(x1, y1, x2, y2);
}

// void w4_runtimeHLine (int x, int y, int len);
void Z_envZ_hline(struct Z_env_instance_t* env, u32 x, u32 y, u32 len) {
    w4_runtimeHLine(x, y, len);
}

// void w4_runtimeVLine (int x, int y, int len);
void Z_envZ_vline(struct Z_env_instance_t* env, u32 x, u32 y, u32 len) {
    w4_runtimeVLine(x, y, len);
}

// void w4_runtimeOval (int x, int y, int width, int height);
void Z_envZ_oval(struct Z_env_instance_t* env, u32 x, u32 y, u32 width, u32 height) {
    w4_runtimeOval(x, y, width, height);
}

// void w4_runtimeRect (int x, int y, int width, int height);
void Z_envZ_rect(struct Z_env_instance_t* env, u32 x, u32 y, u32 width, u32 height) {
    w4_runtimeRect(x, y, width, height);
}

// void w4_runtimeText (const uint8_t* str, int x, int y);
void Z_envZ_text(struct Z_env_instance_t* env, u32 str, u32 x, u32 y) {
    w4_runtimeText(AS_NATIVE_PTR(str), x, y);
}

// void w4_runtimeTextUtf8 (const uint8_t* str, int byteLength, int x, int y);
void Z_envZ_textUtf8(struct Z_env_instance_t* env, u32 str, u32 byteLength, u32 x, u32 y) {
    w4_runtimeTextUtf8(AS_NATIVE_PTR(str), byteLength, x, y);
}

// void w4_runtimeTextUtf16 (const uint16_t* str, int byteLength, int x, int y);
void Z_envZ_textUtf16(struct Z_env_instance_t* env, u32 str, u32 byteLength, u32 x, u32 y) {
    w4_runtimeTextUtf16((uint16_t*) AS_NATIVE_PTR(str), byteLength, x, y);
}

// void w4_runtimeTone (int frequency, int duration, int volume, int flags);
void Z_envZ_tone(struct Z_env_instance_t* env, u32 frequency, u32 duration, u32 volume, u32 flags) {
    w4_runtimeTone(frequency, duration, volume, flags);
}

// int w4_runtimeDiskr (uint8_t* dest, int size);
u32 Z_envZ_diskr(struct Z_env_instance_t* env, u32 ptr, u32 size) {
    return w4_runtimeDiskr(AS_NATIVE_PTR(ptr), size);
}

// int w4_runtimeDiskw (const uint8_t* src, int size);
u32 Z_envZ_diskw(struct Z_env_instance_t* env, u32 ptr, u32 size) {
    return w4_runtimeDiskw(AS_NATIVE_PTR(ptr), size);
}

// void w4_runtimeTrace (const uint8_t* str);
void Z_envZ_trace(struct Z_env_instance_t* env, u32 str) {
    w4_runtimeTrace(AS_NATIVE_PTR(str));
}

// void w4_runtimeTraceUtf8 (const uint8_t* str, int byteLength);
void Z_envZ_traceUtf8(struct Z_env_instance_t* env, u32 str, u32 byteLength) {
    w4_runtimeTraceUtf8(AS_NATIVE_PTR(str), byteLength);
}

// void w4_runtimeTraceUtf16 (const uint16_t* str, int byteLength);
void Z_envZ_traceUtf16(struct Z_env_instance_t* env, u32 str, u32 byteLength) {
    w4_runtimeTraceUtf16((uint16_t*) AS_NATIVE_PTR(str), byteLength);
}

// void w4_runtimeTracef (const uint8_t* str, const void* stack);
void Z_envZ_tracef(struct Z_env_instance_t* env, u32 str, u32 stack) {
    w4_runtimeTracef(AS_NATIVE_PTR(str), AS_NATIVE_PTR(stack));
}
#endif

#ifdef BUILD_USE_W2C2
// void w4_runtimeBlit (const uint8_t* sprite, int x, int y, int width, int height, int flags);
void wasm_shim_blit(u32 sprite, u32 x, u32 y, u32 width, u32 height, u32 flags) {
    w4_runtimeBlit(AS_NATIVE_PTR(sprite), x, y, width, height, flags);
}
void (*env__blit)(u32, u32, u32, u32, u32, u32) = wasm_shim_blit;

// void w4_runtimeBlitSub (const uint8_t* sprite, int x, int y, int width, int height, int srcX, int srcY, int stride, int flags);
void wasm_shim_blitSub(u32 sprite, u32 x, u32 y, u32 width, u32 height, u32 srcX, u32 srcY, u32 stride, u32 flags) {
    w4_runtimeBlitSub(AS_NATIVE_PTR(sprite), x, y, width, height, srcX, srcY, stride, flags);
}
void (*env__blitSub)(u32, u32, u32, u32, u32, u32, u32, u32, u32) = wasm_shim_blitSub;

// void w4_runtimeLine (int x1, int y1, int x2, int y2);
void wasm_shim_line(u32 x1, u32 y1, u32 x2, u32 y2) {
    w4_runtimeLine(x1, y1, x2, y2);
}
void (*env__line)(u32, u32, u32, u32) = wasm_shim_line;

// void w4_runtimeHLine (int x, int y, int len);
void wasm_shim_hline(u32 x, u32 y, u32 len) {
    w4_runtimeHLine(x, y, len);
}
void (*env__hline)(u32, u32, u32) = wasm_shim_hline;

// void w4_runtimeVLine (int x, int y, int len);
void wasm_shim_vline(u32 x, u32 y, u32 len) {
    w4_runtimeVLine(x, y, len);
}
void (*env__vline)(u32, u32, u32) = wasm_shim_vline;

// void w4_runtimeOval (int x, int y, int width, int height);
void wasm_shim_oval(u32 x, u32 y, u32 width, u32 height) {
    w4_runtimeOval(x, y, width, height);
}
void (*env__oval)(u32, u32, u32, u32) = wasm_shim_oval;

// void w4_runtimeRect (int x, int y, int width, int height);
void wasm_shim_rect(u32 x, u32 y, u32 width, u32 height) {
    w4_runtimeRect(x, y, width, height);
}
void (*env__rect)(u32, u32, u32, u32) = wasm_shim_rect;

// void w4_runtimeText (const uint8_t* str, int x, int y);
void wasm_shim_text(u32 str, u32 x, u32 y) {
    w4_runtimeText(AS_NATIVE_PTR(str), x, y);
}
void (*env__text)(u32, u32, u32) = wasm_shim_text;

// void w4_runtimeTextUtf8 (const uint8_t* str, int byteLength, int x, int y);
void wasm_shim_textUtf8(u32 str, u32 byteLength, u32 x, u32 y) {
    w4_runtimeTextUtf8(AS_NATIVE_PTR(str), byteLength, x, y);
}
void (*env__textUtf8)(u32, u32, u32, u32) = wasm_shim_textUtf8;

// void w4_runtimeTextUtf16 (const uint16_t* str, int byteLength, int x, int y);
void wasm_shim_textUtf16(u32 str, u32 byteLength, u32 x, u32 y) {
    w4_runtimeTextUtf16((uint16_t*) AS_NATIVE_PTR(str), byteLength, x, y);
}
void (*env__textUtf16)(u32, u32, u32, u32) = wasm_shim_textUtf16;

// void w4_runtimeTone (int frequency, int duration, int volume, int flags);
void wasm_shim_tone(u32 frequency, u32 duration, u32 volume, u32 flags) {
    w4_runtimeTone(frequency, duration, volume, flags);
}
void (*env__tone)(u32, u32, u32, u32) = wasm_shim_tone;

// int w4_runtimeDiskr (uint8_t* dest, int size);
u32 wasm_shim_diskr(u32 ptr, u32 size) {
    return w4_runtimeDiskr(AS_NATIVE_PTR(ptr), size);
}
u32 (*env__diskr)(u32, u32) = wasm_shim_diskr;

// int w4_runtimeDiskw (const uint8_t* src, int size);
u32 wasm_shim_diskw(u32 ptr, u32 size) {
    return w4_runtimeDiskw(AS_NATIVE_PTR(ptr), size);
}
u32 (*env__diskw)(u32, u32) = wasm_shim_diskw;

// void w4_runtimeTrace (const uint8_t* str);
void wasm_shim_trace(u32 str) {
    w4_runtimeTrace(AS_NATIVE_PTR(str));
}
void (*env__trace)(u32) = wasm_shim_trace;

// void w4_runtimeTraceUtf8 (const uint8_t* str, int byteLength);
void wasm_shim_traceUtf8(u32 str, u32 byteLength) {
    w4_runtimeTraceUtf8(AS_NATIVE_PTR(str), byteLength);
}
void (*env__traceUtf8)(u32, u32) = wasm_shim_traceUtf8;

// void w4_runtimeTraceUtf16 (const uint16_t* str, int byteLength);
void wasm_shim_traceUtf16(u32 str, u32 byteLength) {
    w4_runtimeTraceUtf16((uint16_t*) AS_NATIVE_PTR(str), byteLength);
}
void (*env__traceUtf16)(u32, u32) = wasm_shim_traceUtf16;

// void w4_runtimeTracef (const uint8_t* str, const void* stack);
void wasm_shim_tracef(u32 str, u32 stack) {
    w4_runtimeTracef(AS_NATIVE_PTR(str), AS_NATIVE_PTR(stack));
}
void (*env__tracef)(u32, u32) = wasm_shim_tracef;
#endif