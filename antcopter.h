#ifndef antcopter_H
#define antcopter_H

#ifdef __cplusplus
extern "C" {
#endif

#include "w2c2_base.h"

typedef struct antcopterInstance {
wasmModuleInstance common;
wasmMemory*env__memory;
U32 g0;
} antcopterInstance;

void env__tone(void*,U32,U32,U32,U32);

void env__trace(void*,U32);

void f2(antcopterInstance*);

F32 f3(antcopterInstance*,F32,F32);

F32 f4(antcopterInstance*,F64);

F32 f5(antcopterInstance*,F64);

F64 f6(antcopterInstance*,F64,U32);

U32 f7(antcopterInstance*,F32,U32);

F32 f8(antcopterInstance*,F32);

void f9(antcopterInstance*,U32,U32,U32);

F32 f10(antcopterInstance*,F32);

F32 f11(antcopterInstance*,F32);

void f12(antcopterInstance*,U32,U32,U32);

F32 f13(antcopterInstance*,F32);

void f14(antcopterInstance*);

void f15(antcopterInstance*,U32);

void f16(antcopterInstance*,U32);

void f17(antcopterInstance*,U32);

void f18(antcopterInstance*,U32);

U32 f19(antcopterInstance*,U32,F32,F32,U32);

void f20(antcopterInstance*,U32,F32);

void f21(antcopterInstance*,U32,U32);

void f22(antcopterInstance*,U32,F32,F32);

U32 f23(antcopterInstance*,U32,F32,F32);

void f24(antcopterInstance*,U32,U32,U32,U32,U32);

void f25(antcopterInstance*,F32,F32,F32,U32);

void f26(antcopterInstance*,U32,F32,F32,U32,U32,U32);

void f27(antcopterInstance*);

void f28(antcopterInstance*,F32,F32,F32,F32,U32);

void f29(antcopterInstance*,U32,U32,F32,F32,U32);

void f30(antcopterInstance*,U32,U32);

void f31(antcopterInstance*,U32,U32,U32);

void f32(antcopterInstance*,U32,U32,U32,U32,U32,U32);

void f33(antcopterInstance*,U32);

void f34(antcopterInstance*,U32,U32,U32);

U32 f35(antcopterInstance*,U32);

U32 f36(antcopterInstance*,U32);

void f37(antcopterInstance*,U32);

void f38(antcopterInstance*,U32);

void f39(antcopterInstance*,U32,U32);

void f40(antcopterInstance*,U32,U32,U32);

void f41(antcopterInstance*,U32,U32,U32,U32);

void f42(antcopterInstance*,U32,U32);

U32 f43(antcopterInstance*,U32);

void f44(antcopterInstance*);

U32 f45(antcopterInstance*,U32);

void f46(antcopterInstance*,U32,U32);

void f47(antcopterInstance*,U32,U32,U32,U32);

void f48(antcopterInstance*);

void antcopter__initialize(antcopterInstance*i);

void antcopter_update(antcopterInstance*i);

void antcopter__start(antcopterInstance*i);

void antcopterInstantiate(antcopterInstance* instance, void* resolve(const char* module, const char* name));

void antcopterFreeInstance(antcopterInstance* instance);

#ifdef __cplusplus
}
#endif

#endif /* antcopter_H */

