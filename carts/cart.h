#ifndef cart_H
#define cart_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stdio.h>
#include "w2c2_base.h"

typedef struct cartInstance {
wasmModuleInstance common;
wasmMemory*env__memory;
U32 g0;
U32 g1;
} cartInstance;

void env__text(void*,U32,U32,U32);

void env__blit(void*,U32,U32,U32,U32,U32,U32);

void f2(cartInstance*);

void f3(cartInstance*);

void cart_update(cartInstance*i);

void cartInstantiate(cartInstance* instance, void* resolve(const char* module, const char* name));

void cartFreeInstance(cartInstance* instance);

#ifdef __cplusplus
}
#endif

#endif /* cart_H */

