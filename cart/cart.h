#ifndef cart_H
#define cart_H

#ifdef __cplusplus
extern "C" {
#endif

#include "w2c2_base.h"

typedef struct cartInstance {
wasmModuleInstance common;
wasmMemory*env__memory;
wasmTable t0;
U32 g0;
} cartInstance;

void env__rect(void*,U32,U32,U32,U32);

void env__textUtf8(void*,U32,U32,U32,U32);

void env__line(void*,U32,U32,U32,U32);

void env__tone(void*,U32,U32,U32,U32);

void f4(cartInstance*,U32);

U32 f5(cartInstance*,U32,U32);

void f6(cartInstance*,U32);

void f7(cartInstance*,U32);

void f8(cartInstance*,U32);

void f9(cartInstance*,U32,U32,U32,U32,U32,U32);

U32 f10(cartInstance*,U32);

void f11(cartInstance*,U32);

void f12(cartInstance*,U32);

void f13(cartInstance*,U32);

void f14(cartInstance*,U32,U32);

U32 f15(cartInstance*,U32);

void f16(cartInstance*,U32);

void f17(cartInstance*,U32);

void f18(cartInstance*);

void f19(cartInstance*,U32,U32);

U32 f20(cartInstance*,U32);

U32 f21(cartInstance*,U32);

U32 f22(cartInstance*,U32);

void f23(cartInstance*,U32);

U32 f24(cartInstance*,U32,U32);

U32 f25(cartInstance*,U32,U32);

U32 f26(cartInstance*,U32,U32,U32);

U32 f27(cartInstance*,U32);

void f28(cartInstance*);

void f29(cartInstance*);

void f30(cartInstance*);

void f31(cartInstance*);

void f32(cartInstance*,U32,U32,U32,U32,U32);

void f33(cartInstance*);

void f34(cartInstance*);

void f35(cartInstance*,U32,U32,U32);

void f36(cartInstance*,U32);

void f37(cartInstance*,U32,U32);

void f38(cartInstance*,U32,U32,U32,U32);

U32 f39(cartInstance*,U32);

U32 f40(cartInstance*,U32);

U32 f41(cartInstance*,U32);

void f42(cartInstance*,U32);

U32 f43(cartInstance*,U32);

U32 f44(cartInstance*,U32);

U32 f45(cartInstance*,U32);

void f46(cartInstance*,U32,U32,U32);

U32 f47(cartInstance*,U32,U32,U32);

void f48(cartInstance*,U32,U32,U32);

U32 f49(cartInstance*,U32,U32);

U32 cart_malloc(cartInstance*i,U32 l0);

void cart_free(cartInstance*i,U32 l0);

U32 cart_calloc(cartInstance*i,U32 l0,U32 l1);

U32 cart_realloc(cartInstance*i,U32 l0,U32 l1);

U32 cart_posix_memalign(cartInstance*i,U32 l0,U32 l1,U32 l2);

U32 cart_aligned_alloc(cartInstance*i,U32 l0,U32 l1);

U32 cart_malloc_usable_size(cartInstance*i,U32 l0);

void cart__start(cartInstance*i);

void cart_resume(cartInstance*i);

void cart_go_scheduler(cartInstance*i);

void cart_start(cartInstance*i);

void cart_update(cartInstance*i);

void cartInstantiate(cartInstance* instance, void* resolve(const char* module, const char* name));

void cartFreeInstance(cartInstance* instance);

#ifdef __cplusplus
}
#endif

#endif /* cart_H */

