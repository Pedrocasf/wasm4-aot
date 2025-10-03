#include "w2c2_base.h"

#include "cart.h"

const U8 d0[]={0xc3,0x81,0x24,0x24,0,0x24,0x99,0xc3};

const U8 d1[]={
0x49,0x54,0x27,0x53,0x20,0x44,0x41,0x4e,0x47,0x45,0x52,0x4f,0x55,0x53,0xa,0x20,0x54,0x4f,
0x20,0x47,0x4f,0x20,0x41,0x4c,0x4f,0x4e,0x45,0x21
};

void f3(cartInstance*i) {
   
U32 si0,si1,si2,si3,si4,si5;
f2(i);
si0=20U;
si1=2U;
i32_store16(i->env__memory,si0,si1);
si0=6568U;
si1=24U;
si2=50U;
env__text(i,si0,si1,si2);
si0=20U;
si1=3U;
i32_store16(i->env__memory,si0,si1);
si0=6560U;
si1=i->g0;
si2=i->g1;
si3=8U;
si4=8U;
si5=0U;
env__blit(i,si0,si1,si2,si3,si4,si5);
L0:;
}

void f2(cartInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=-1U;
si1=0U;
si2=22U;
si2=i32_load8_u(i->env__memory,si2);
l1=si2;
si3=16U;
si2&=si3;
si0=si2?si0:si1;
l0=si0;
si0=1U;
si1=l0;
si2=l1;
si3=32U;
si2&=si3;
si0=si2?si0:si1;
l0=si0;
si0=-1U;
si1=0U;
si2=l1;
si3=64U;
si2&=si3;
si0=si2?si0:si1;
l2=si0;
si0=i->g0;
si1=l0;
si0+=si1;
i->g0=si0;
si0=i->g1;
si1=1U;
si2=l2;
si3=l1;
si4=128U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
i->g1=si0;
L0:;
}

wasmFuncExport cartFuncExports[2] = {
{(wasmFunc)f3,"update"},
{NULL,NULL}
};

static void cartInitGlobals(cartInstance* i) {
i->g0=76U;
i->g1=76U;
}

static void cartInitImports(cartInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
}

void cart_update(cartInstance*i){
    printf("f3\n");
    f3(i);
}

cartInstance* cartNewChild(cartInstance* self) {
cartInstance* child = (cartInstance*)calloc(1, sizeof(cartInstance));
child->common.funcExports = self->common.funcExports;
child->common.resolveImports = self->common.resolveImports;
child->common.newChild = self->common.newChild;
cartInitImports(child, self->common.resolveImports);
cartInitGlobals(child);
return child;
}

void cartInstantiate(cartInstance* i, void* resolveImports(const char* module, const char* name)) {
i->common.funcExports = cartFuncExports;
i->common.resolveImports = resolveImports;
i->common.newChild = (struct wasmModuleInstance* (*)(struct wasmModuleInstance*))cartNewChild;
cartInitImports(i, resolveImports);
cartInitGlobals(i);
}

void cartFreeInstance(cartInstance* i) {
}

