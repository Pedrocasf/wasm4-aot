#include <stdint.h>
#include <stdio.h>
#include "runtime.h"
#include "stdlib.h"
#include "platform_shim.h"
#include "wasm-cart.h"

typedef unsigned int u32;
uint8_t *w4_memory_raw = (uint8_t*) &w4_memory;

#ifdef BUILD_USE_WASM2C
#include "wasm-rt-impl.c"
#include "wasm-rt-std.c"

wasm_rt_memory_t env__memory = {
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
wasmMemory *m_env__memory = &wasm_shim_memory;


static void e_dummy(void) {

}

static void start_dummy(void*i){

}

void trap(Trap t) {
    abort();
}

// Some WASM-4 cartridges don't come with e_start.
void (*cart_start)(void* i) __attribute__((weak)) = start_dummy;
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
void env__blit(void* i, u32 sprite, u32 x, u32 y, u32 width, u32 height, u32 flags) {
    w4_runtimeBlit(AS_NATIVE_PTR(sprite), x, y, width, height, flags);
}

// void w4_runtimeBlitSub (const uint8_t* sprite, int x, int y, int width, int height, int srcX, int srcY, int stride, int flags);
void env__blitSub(void* i, u32 sprite, u32 x, u32 y, u32 width, u32 height, u32 srcX, u32 srcY, u32 stride, u32 flags) {
    w4_runtimeBlitSub(AS_NATIVE_PTR(sprite), x, y, width, height, srcX, srcY, stride, flags);
}

// void w4_runtimeLine (int x1, int y1, int x2, int y2);
void env__line(void* i, u32 x1, u32 y1, u32 x2, u32 y2) {
    w4_runtimeLine(x1, y1, x2, y2);
}

// void w4_runtimeHLine (int x, int y, int len);
void env__hline(void* i, u32 x, u32 y, u32 len) {
    w4_runtimeHLine(x, y, len);
}

// void w4_runtimeVLine (int x, int y, int len);
void env__vline(void* i, u32 x, u32 y, u32 len) {
    w4_runtimeVLine(x, y, len);
}

// void w4_runtimeOval (int x, int y, int width, int height);
void env__oval(void* i, u32 x, u32 y, u32 width, u32 height) {
    w4_runtimeOval(x, y, width, height);
}

// void w4_runtimeRect (int x, int y, int width, int height);
void env__rect(void* i, u32 x, u32 y, u32 width, u32 height) {
    w4_runtimeRect(x, y, width, height);
}

// void w4_runtimeText (const uint8_t* str, int x, int y);
void env__text(void* i, u32 str, u32 x, u32 y) {
    w4_runtimeText(AS_NATIVE_PTR(str), x, y);
}

// void w4_runtimeTextUtf8 (const uint8_t* str, int byteLength, int x, int y);
void env__textUtf8(void* i, u32 str, u32 byteLength, u32 x, u32 y) {
    w4_runtimeTextUtf8(AS_NATIVE_PTR(str), byteLength, x, y);
};

// void w4_runtimeTextUtf16 (const uint16_t* str, int byteLength, int x, int y);
void env__textUtf16(void* i, u32 str, u32 byteLength, u32 x, u32 y) {
    w4_runtimeTextUtf16((uint16_t*) AS_NATIVE_PTR(str), byteLength, x, y);
}

// void w4_runtimeTone (int frequency, int duration, int volume, int flags);
void env__tone(void* i, u32 frequency, u32 duration, u32 volume, u32 flags) {
    w4_runtimeTone(frequency, duration, volume, flags);
}

// int w4_runtimeDiskr (uint8_t* dest, int size);
u32 env__diskr(void* i, u32 ptr, u32 size) {
    //fprintf(stderr, "diskr shim\n");
    return w4_runtimeDiskr(AS_NATIVE_PTR(ptr), size);
}

// int w4_runtimeDiskw (const uint8_t* src, int size);
u32 env__diskw(void* i,u32 ptr, u32 size) {
    return w4_runtimeDiskw(AS_NATIVE_PTR(ptr), size);
}

// void w4_runtimeTrace (const uint8_t* str);
void env__trace(void* i, u32 str) {
    w4_runtimeTrace(AS_NATIVE_PTR(str));
}

// void w4_runtimeTraceUtf8 (const uint8_t* str, int byteLength);
void env__traceUtf8(void* i, u32 str, u32 byteLength) {
    w4_runtimeTraceUtf8(AS_NATIVE_PTR(str), byteLength);
}

// void w4_runtimeTraceUtf16 (const uint16_t* str, int byteLength);
void env__traceUtf16(void* i, u32 str, u32 byteLength) {
    w4_runtimeTraceUtf16((uint16_t*) AS_NATIVE_PTR(str), byteLength);
}

// void w4_runtimeTracef (const uint8_t* str, const void* stack);
void env__tracef(void* i, u32 str, u32 stack) {
    w4_runtimeTracef(AS_NATIVE_PTR(str), AS_NATIVE_PTR(stack));
}
#endif