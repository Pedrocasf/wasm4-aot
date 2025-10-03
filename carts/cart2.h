#ifndef cart2_H
#define cart2_H

#ifdef __cplusplus
extern "C" {
#endif

#include "w2c2_base.h"

typedef struct cart2Instance {
  wasmModuleInstance common;
  wasmMemory* env__memory;
  wasmTable t0;
  U32 g0;
} cart2Instance;

  void cart2_env__rect(void*, U32, U32, U32, U32);

  void cart2_env__textUtf8(void*, U32, U32, U32, U32);

  void cart2_env__line(void*, U32, U32, U32, U32);

  void cart2_env__tone(void*, U32, U32, U32, U32);

void cart2_f4(cart2Instance*, U32);

U32 cart2_f5(cart2Instance*, U32, U32);

void cart2_f6(cart2Instance*, U32);

void cart2_f7(cart2Instance*, U32);

void cart2_f8(cart2Instance*, U32);

void cart2_f9(cart2Instance*, U32, U32, U32, U32, U32, U32);

U32 cart2_f10(cart2Instance*, U32);

void cart2_f11(cart2Instance*, U32);

void cart2_f12(cart2Instance*, U32);

void cart2_f13(cart2Instance*, U32);

void cart2_f14(cart2Instance*, U32, U32);

U32 cart2_f15(cart2Instance*, U32);

void cart2_f16(cart2Instance*, U32);

void cart2_f17(cart2Instance*, U32);

void cart2_f18(cart2Instance*);

void cart2_f19(cart2Instance*, U32, U32);

U32 cart2_f20(cart2Instance*, U32);

U32 cart2_f21(cart2Instance*, U32);

U32 cart2_f22(cart2Instance*, U32);

void cart2_f23(cart2Instance*, U32);

U32 cart2_f24(cart2Instance*, U32, U32);

U32 cart2_f25(cart2Instance*, U32, U32);

U32 cart2_f26(cart2Instance*, U32, U32, U32);

U32 cart2_f27(cart2Instance*, U32);

void cart2_f28(cart2Instance*);

void cart2_f29(cart2Instance*);

void cart2_f30(cart2Instance*);

void cart2_f31(cart2Instance*);

void cart2_f32(cart2Instance*, U32, U32, U32, U32, U32);

void cart2_f33(cart2Instance*);

void cart2_f34(cart2Instance*);

void cart2_f35(cart2Instance*, U32, U32, U32);

void cart2_f36(cart2Instance*, U32);

void cart2_f37(cart2Instance*, U32, U32);

void cart2_f38(cart2Instance*, U32, U32, U32, U32);

U32 cart2_f39(cart2Instance*, U32);

U32 cart2_f40(cart2Instance*, U32);

U32 cart2_f41(cart2Instance*, U32);

void cart2_f42(cart2Instance*, U32);

U32 cart2_f43(cart2Instance*, U32);

U32 cart2_f44(cart2Instance*, U32);

U32 cart2_f45(cart2Instance*, U32);

void cart2_f46(cart2Instance*, U32, U32, U32);

U32 cart2_f47(cart2Instance*, U32, U32, U32);

void cart2_f48(cart2Instance*, U32, U32, U32);

U32 cart2_f49(cart2Instance*, U32, U32);

U32 cart2_malloc(cart2Instance* i, U32 l0);

void cart2_free(cart2Instance* i, U32 l0);

U32 cart2_calloc(cart2Instance* i, U32 l0, U32 l1);

U32 cart2_realloc(cart2Instance* i, U32 l0, U32 l1);

U32 cart2_posix_memalign(cart2Instance* i, U32 l0, U32 l1, U32 l2);

U32 cart2_aligned_alloc(cart2Instance* i, U32 l0, U32 l1);

U32 cart2_malloc_usable_size(cart2Instance* i, U32 l0);

void cart2__start(cart2Instance* i);

void cart2_resume(cart2Instance* i);

void cart2_go_scheduler(cart2Instance* i);

void cart2_start(cart2Instance* i);

void cart2_update(cart2Instance* i);

void cart2Instantiate(cart2Instance* instance, void* resolve(const char* module, const char* name));

void cart2FreeInstance(cart2Instance* instance);

#ifdef __cplusplus
}
#endif

#endif /* cart2_H */

