#include "w2c2_base.h"

#include "cart.h"

const U8 d0[]={
0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x61,0x62,0x63,0x64,0x65,0x66,0x67,0x68,
0x69,0x6a,0x6b,0x6c,0x6d,0x6e,0x6f,0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7a,
0x30,0x30,0x30,0x31,0x30,0x32,0x30,0x33,0x30,0x34,0x30,0x35,0x30,0x36,0x30,0x37,0x30,0x38,
0x30,0x39,0x31,0x30,0x31,0x31,0x31,0x32,0x31,0x33,0x31,0x34,0x31,0x35,0x31,0x36,0x31,0x37,
0x31,0x38,0x31,0x39,0x32,0x30,0x32,0x31,0x32,0x32,0x32,0x33,0x32,0x34,0x32,0x35,0x32,0x36,
0x32,0x37,0x32,0x38,0x32,0x39,0x33,0x30,0x33,0x31,0x33,0x32,0x33,0x33,0x33,0x34,0x33,0x35,
0x33,0x36,0x33,0x37,0x33,0x38,0x33,0x39,0x34,0x30,0x34,0x31,0x34,0x32,0x34,0x33,0x34,0x34,
0x34,0x35,0x34,0x36,0x34,0x37,0x34,0x38,0x34,0x39,0x35,0x30,0x35,0x31,0x35,0x32,0x35,0x33,
0x35,0x34,0x35,0x35,0x35,0x36,0x35,0x37,0x35,0x38,0x35,0x39,0x36,0x30,0x36,0x31,0x36,0x32,
0x36,0x33,0x36,0x34,0x36,0x35,0x36,0x36,0x36,0x37,0x36,0x38,0x36,0x39,0x37,0x30,0x37,0x31,
0x37,0x32,0x37,0x33,0x37,0x34,0x37,0x35,0x37,0x36,0x37,0x37,0x37,0x38,0x37,0x39,0x38,0x30,
0x38,0x31,0x38,0x32,0x38,0x33,0x38,0x34,0x38,0x35,0x38,0x36,0x38,0x37,0x38,0x38,0x38,0x39,
0x39,0x30,0x39,0x31,0x39,0x32,0x39,0x33,0x39,0x34,0x39,0x35,0x39,0x36,0x39,0x37,0x39,0x38,
0x39,0x39,0x4c,0x20,0x20,0x20,0x45,0x20,0x20,0x20,0x54,0x20,0x20,0x20,0x53,0x20,0x20,0x20,
0x20,0x20,0x20,0x47,0x20,0x20,0x20,0x4f,0x2e,0x4c,0x20,0x20,0x45,0x20,0x20,0x54,0x20,0x20,
0x53,0x20,0x20,0x20,0x20,0x47,0x20,0x20,0x4f,0x21,0x4c,0x20,0x45,0x20,0x54,0x20,0x53,0x20,
0x20,0x47,0x20,0x4f,0x21,0x4c,0x45,0x54,0x53,0x20,0x47,0x4f,0x21,0x54,0x6f,0x74,0x61,0x6c,
0x20,0x32,0x7c,0x30,0x7c,0x34,0x7c,0x38,0x20,0x20,0x2d,0x2b,0x2d,0x2b,0x2d,0x2b,0x2d,0x20,
0x20,0x20,0x20,0x20,0x20
};

const U8 d1[]={
0xf3,0xf1,0xe5,0,0xb8,0xa8,0x7b,0,0x7b,0x61,0x30,0,0x3b,0x26,8,0,0xf3,0xf7,
0xfb,0,0x83,0xb0,0xe5,0,0x5d,0x6e,0x42,0,0x3d,0x28,0x20,0,0xc2,0xe4,0xff,0,
0x56,0xa4,0xdc,0,0x4c,0x60,0xa9,0,0x36,0x29,0x42,0,0xdd,0xf5,0xff,0,0x6b,0xb2,
0xf4,0,0x91,0x65,0xb7,0,0x6c,0x29,0x65,0,0xe0,0xff,0xf1,0,0x71,0x81,0x98,0,
0x34,0x35,0x46,0,0x21,0x17,0x1e,0,0xd3,0xf6,0xff,0,0x75,0xa8,0xf9,0,0x6f,0x6b,
0xeb,0,0x58,0x3f,0x7c,0,0xb8,0xcc,0xc5,0,0x98,0x9b,0x89,0,0x72,0x68,0x5d,0,
0x43,0x33,0x33,0,0xd0,0xfb,0xf4,0,0x68,0xcf,0x68,0,0x78,0x91,0x1e,0,0x1f,0x24,
5,0,0xe8,0xf0,0xe0,0,0xb0,0xc0,0xa8,0,0x68,0x78,0x50,0,0x30,0x30,0x18,0,
0x91,0xd1,0xff,0,0x4f,0x92,0xff,0,0x5c,0x60,0x66,0,0x20,0x1e,0x21,0,0xb0,0x23
};

U32 f22(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
sj1=W2C2_LL(1U);
i64_store(i->env__memory,(U64)si0+4U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l2=si0;
si0=7076U;
si1=l1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si0=f10(i,si0);
l0=si0;
si0=7076U;
si1=l2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=l0;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f37(cartInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+68U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+60U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+52U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+44U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+36U,sj1);
si0=l2;
sj1=W2C2_LL(11U);
i64_store(i->env__memory,(U64)si0+28U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l8=si0;
si0=7076U;
si1=l2;
si2=24U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=l8;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=l1;
si1=99U;
si0=si0 <= si1;
if(si0){
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si2=6560U;
si1+=si2;
si2=l1;
si3=1U;
si2<<=(si3&31);
si3=6596U;
si2+=si3;
si3=l1;
si4=10U;
si3=(U32)((I32)si3<(I32)si4);
l1=si3;
si1=si3?si1:si2;
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=1U;
si1=2U;
si2=l1;
si0=si2?si0:si1;
l1=si0;
goto L2;
}
L3:;
si0=l2;
si1=36U;
si0+=si1;
si1=65U;
si1=f10(i,si1);
l7=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
sj0=(U64)(I64)(I32)(si0);
l13=sj0;
sj1=l13;
sj2=W2C2_LL(63U);
sj1=(U64)((I64)sj1>>(sj2&63));
l13=sj1;
sj0+=sj1;
sj1=l13;
sj0^=sj1;
l13=sj0;
si0=l7;
si1=2U;
si0-=si1;
l9=si0;
si0=65U;
l5=si0;
L4:;
{
sj0=l13;
sj1=W2C2_LL(1000000000U);
si0=sj0 >= sj1;
if(si0){
si0=l5;
si1=l9;
si0+=si1;
l6=si0;
sj0=l13;
sj1=l13;
sj2=W2C2_LL(1000000000U);
sj1=DIV_U(sj1,sj2);
l13=sj1;
sj2=W2C2_LL(-1000000000U);
sj1*=sj2;
sj0+=sj1;
si0=(U32)(sj0);
l3=si0;
si0=0U;
l4=si0;
L6:;
{
si0=l4;
si1=-8U;
si0=si0 != si1;
if(si0){
si0=l4;
si1=l5;
si0+=si1;
l10=si0;
si1=1U;
si0-=si1;
si1=64U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l4;
si1=l6;
si0+=si1;
l11=si0;
si1=1U;
si0+=si1;
si1=l3;
si2=l3;
si3=100U;
si2=DIV_U(si2,si3);
l3=si2;
si3=100U;
si2*=si3;
si1-=si2;
si2=1U;
si1<<=(si2&31);
l12=si1;
si2=1U;
si1|=si2;
si2=6596U;
si1+=si2;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l10;
si1=2U;
si0-=si1;
si1=65U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l11;
si1=l12;
si2=6596U;
si1+=si2;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l4;
si1=2U;
si0-=si1;
l4=si0;
goto L6;
}
L7:;
}
si0=l4;
si1=l5;
si0+=si1;
si1=1U;
si0-=si1;
l5=si0;
si1=64U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
l3=si0;
si1=200U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l6;
si0+=si1;
si1=1U;
si0+=si1;
si1=l3;
si2=6596U;
si1+=si2;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
goto L4;
}
L5:;
}
si0=l5;
si1=1U;
si0-=si1;
l4=si0;
sj0=l13;
si0=(U32)(sj0);
l3=si0;
L8:;
{
si0=l3;
si1=100U;
si0=si0 >= si1;
if(si0){
si0=l4;
si1=64U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l4;
si1=l7;
si0+=si1;
l5=si0;
si1=l3;
si2=l3;
si3=100U;
si2=DIV_U(si2,si3);
l3=si2;
si3=100U;
si2*=si3;
si1-=si2;
si2=1U;
si1<<=(si2&31);
l6=si1;
si2=1U;
si1|=si2;
si2=6596U;
si1+=si2;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l4;
si1=1U;
si0-=si1;
si1=65U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l5;
si1=1U;
si0-=si1;
si1=l6;
si2=6596U;
si1+=si2;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l4;
si1=2U;
si0-=si1;
l4=si0;
goto L8;
}
L9:;
}
si0=l4;
si1=64U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l4;
si1=l7;
si0+=si1;
l5=si0;
si1=l3;
si2=1U;
si1<<=(si2&31);
l6=si1;
si2=1U;
si1|=si2;
si2=6596U;
si1+=si2;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l3;
si1=9U;
si0=si0 > si1;
if(si0){
si0=l4;
si1=1U;
si0-=si1;
l4=si0;
si1=64U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l5;
si1=1U;
si0-=si1;
si1=l6;
si2=6596U;
si1+=si2;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
}
L10:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
si0=l4;
si1=1U;
si0-=si1;
l4=si0;
si1=64U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l4;
si1=l7;
si0+=si1;
si1=45U;
i32_store8(i->env__memory,(U64)si0,si1);
}
L11:;
si0=l2;
si1=48U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=l2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0,sj1);
si0=l2;
si1=60U;
si0+=si1;
si1=65U;
si2=l4;
si1-=si2;
l1=si1;
si1=f10(i,si1);
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=-64U;
si0-=si1;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=52U;
si0+=si1;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=l4;
si2=l7;
si1+=si2;
si2=l1;
si0=f47(i,si0,si1,si2);
L2:;
si0=7076U;
si1=l8;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=68U;
si0+=si1;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=72U;
si0+=si1;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
UNREACHABLE;
L0:;
}

U32 f49(cartInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store8(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l1;
si0+=si1;
l2=si0;
si1=1U;
si0-=si1;
si1=0U;
i32_store8(i->env__memory,(U64)si0,si1);
si0=l1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store8(i->env__memory,(U64)si0+2U,si1);
si0=l0;
si1=0U;
i32_store8(i->env__memory,(U64)si0+1U,si1);
si0=l2;
si1=3U;
si0-=si1;
si1=0U;
i32_store8(i->env__memory,(U64)si0,si1);
si0=l2;
si1=2U;
si0-=si1;
si1=0U;
i32_store8(i->env__memory,(U64)si0,si1);
si0=l1;
si1=7U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store8(i->env__memory,(U64)si0+3U,si1);
si0=l2;
si1=4U;
si0-=si1;
si1=0U;
i32_store8(i->env__memory,(U64)si0,si1);
si0=l1;
si1=9U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
si2=l0;
si1-=si2;
si2=3U;
si1&=si2;
l3=si1;
si0+=si1;
l2=si0;
si1=0U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=l1;
si2=l3;
si1-=si2;
si2=-4U;
si1&=si2;
l3=si1;
si0+=si1;
l1=si0;
si1=4U;
si0-=si1;
si1=0U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=9U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=0U;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l1;
si1=8U;
si0-=si1;
si1=0U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=12U;
si0-=si1;
si1=0U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=25U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=0U;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=l2;
si1=0U;
i32_store(i->env__memory,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(i->env__memory,(U64)si0+16U,si1);
si0=l2;
si1=0U;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l1;
si1=16U;
si0-=si1;
si1=0U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=20U;
si0-=si1;
si1=0U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=24U;
si0-=si1;
si1=0U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=28U;
si0-=si1;
si1=0U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=l2;
si2=4U;
si1&=si2;
si2=24U;
si1|=si2;
l3=si1;
si0-=si1;
l1=si0;
si1=32U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=l3;
si0+=si1;
l2=si0;
L2:;
{
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
l2=si0;
si0=l1;
si1=32U;
si0-=si1;
l1=si0;
si1=31U;
si0=si0 > si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
L0:;
return si0;
}

void f4(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=10U;
si0=f5(i,si0,si1);
l6=si0;
L2:;
{
si0=l1;
si1=4U;
si0=si0 != si1;
if(si0){
si0=0U;
l3=si0;
si0=0U;
l2=si0;
L4:;
{
si0=l2;
si1=4U;
si0=si0 != si1;
if(si0){
si0=l0;
if(si0){
goto L5;
}
goto L1;
}
L6:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L2;
L5:;
si0=l1;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+12U);
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+8U);
si2=l1;
si3=12U;
si2*=si3;
si1+=si2;
l4=si1;
si1=i32_load(i->env__memory,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si1=l4;
si1=i32_load(i->env__memory,(U64)si1);
si2=l3;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si1=!(si1);
si0+=si1;
l5=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
goto L4;
}
UNREACHABLE;
}
L3:;
}
si0=0U;
l4=si0;
si0=l0;
si1=l5;
si0=f5(i,si0,si1);
l5=si0;
si0=0U;
l1=si0;
L8:;
{
si0=l1;
si1=4U;
si0=si0 != si1;
if(si0){
si0=0U;
l3=si0;
si0=0U;
l2=si0;
L10:;
{
si0=l2;
si1=4U;
si0=si0 != si1;
if(si0){
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+12U);
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+8U);
si2=l1;
si3=12U;
si2*=si3;
si1+=si2;
l7=si1;
si1=i32_load(i->env__memory,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l7;
si0=i32_load(i->env__memory,(U64)si0);
si1=l3;
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
si0=!(si0);
if(si0){
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
}
L12:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
goto L10;
}
L11:;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L8;
}
L9:;
}
goto L0;
L7:;
si0=l0;
si1=l2;
i32_store(i->env__memory,(U64)si0+28U,si1);
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=l1;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+12U);
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+8U);
si2=l1;
si3=12U;
si2*=si3;
si1+=si2;
l0=si1;
si1=i32_load(i->env__memory,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0);
si1=l3;
si0+=si1;
si1=4U;
si2=2U;
si3=l6;
si4=8U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
i32_store(i->env__memory,(U64)si0,si1);
goto L0;
L1:;
UNREACHABLE;
L0:;
}

void f16(cartInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3,si4;
si0=7060U;
si0=i32_load(i->env__memory,(U64)si0);
si1=l0;
si2=2U;
si1>>=(si2&31);
si0+=si1;
l1=si0;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1);
si2=3U;
si3=l0;
si4=1U;
si3<<=(si4&31);
si4=6U;
si3&=si4;
si2<<=(si3&31);
si3=-1U;
si2^=si3;
si1&=si2;
i32_store8(i->env__memory,(U64)si0,si1);
L0:;
}

U32 f24(cartInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
sj1=W2C2_LL(1U);
i64_store(i->env__memory,(U64)si0+4U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l3=si0;
si0=7076U;
si1=l2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l1;
si0*=si1;
si0=f10(i,si0);
l0=si0;
si0=7076U;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=l0;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f17(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=i->g0;
si1=-64U;
si0+=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=64U;
si0=f49(i,si0,si1);
l4=si0;
si1=l0;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=3U;
f19(i,si0,si1);
si0=1U;
l2=si0;
L1:;
{
si0=l2;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
si0=l2;
si1=1U;
si0-=si1;
l2=si0;
si1=15U;
si0=si0 <= si1;
if(si0){
goto L3;
}
goto L2;
}
L4:;
si0=l4;
si1=-64U;
si0-=si1;
i->g0=si0;
goto L0;
L3:;
si0=l4;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
l3=si0;
si1=4U;
si0<<=(si1&31);
l0=si0;
si0=7052U;
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
si0=l3;
si0=f15(i,si0);
si1=255U;
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
si0=l3;
si0=f15(i,si0);
si1=255U;
si0&=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L6:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
L5:;
si0=l0;
si1=l1;
si0+=si1;
l0=si0;
si0=16U;
si1=l3;
si2=4U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
l6=si0;
L7:;
{
si0=l1;
l5=si0;
si1=16U;
si0+=si1;
l1=si0;
si0=l6;
si1=16U;
si0-=si1;
l6=si0;
si0=l3;
si0=f15(i,si0);
l7=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
}
si0=7052U;
si0=i32_load(i->env__memory,(U64)si0);
si1=l5;
si0+=si1;
l5=si0;
L8:;
{
si0=l0;
si1=l5;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
si0=f20(i,si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=7052U;
si1=i32_load(i->env__memory,(U64)si1);
si0-=si1;
si1=4U;
si0>>=(si1&31);
l1=si0;
si0=f15(i,si0);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si0=f21(i,si0);
l1=si0;
si0=f15(i,si0);
si1=255U;
si0&=si1;
si1=3U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=3U;
f19(i,si0,si1);
si0=l2;
si1=16U;
si0=si0 == si1;
if(si0){
si0=7073U;
si1=1U;
i32_store8(i->env__memory,(U64)si0,si1);
si0=16U;
l2=si0;
goto L9;
}
L10:;
si0=l2;
si1=15U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
L9:;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
goto L8;
}
UNREACHABLE;
L2:;
}
UNREACHABLE;
L0:;
}

void f7(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=-64U;
si0+=si1;
l1=si0;
i->g0=si0;
si0=l1;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+52U,sj1);
si0=l1;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+44U,sj1);
si0=l1;
si1=0U;
i32_store(i->env__memory,(U64)si0+36U,si1);
si0=l1;
sj1=W2C2_LL(7U);
i64_store(i->env__memory,(U64)si0+28U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l11=si0;
si0=7076U;
si1=l1;
si2=24U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=l11;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=l1;
si1=l1;
si2=12U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+40U,si1);
si0=7072U;
l5=si0;
si0=4U;
l3=si0;
si0=l1;
si1=32U;
si0+=si1;
l2=si0;
si0=l1;
si1=44U;
si0+=si1;
l6=si0;
L1:;
{
si0=l2;
si1=l5;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
if(si0){
si0=l1;
si1=36U;
si0+=si1;
si1=16U;
si1=f10(i,si1);
l7=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=l7;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l1;
sj1=W2C2_LL(17179869188U);
i64_store(i->env__memory,(U64)si0+16U,sj1);
si0=l1;
si1=l5;
si2=l1;
si3=12U;
si2+=si3;
si3=l8;
si4=l9;
si5=12U;
f9(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1);
l5=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=1U;
si0-=si1;
l3=si0;
si0=l1;
si0=i32_load(i->env__memory,(U64)si0+8U);
l9=si0;
si0=l1;
si0=i32_load(i->env__memory,(U64)si0+4U);
l8=si0;
goto L1;
}else{
si0=0U;
l2=si0;
si0=l1;
si1=48U;
si0+=si1;
l12=si0;
si0=l1;
si1=52U;
si0+=si1;
l13=si0;
si0=l1;
si1=56U;
si0+=si1;
l14=si0;
L4:;
{
si0=l2;
si1=4U;
si0=si0 != si1;
if(si0){
si0=l5;
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l15=si0;
si1=4U;
si0+=si1;
l16=si0;
si0=36U;
l3=si0;
si0=3U;
l6=si0;
si0=0U;
l7=si0;
si0=0U;
l10=si0;
L6:;
{
si0=l3;
si1=-12U;
si0=si0 != si1;
if(si0){
si0=l2;
si1=l8;
si0=si0 < si1;
if(si0){
goto L7;
}
goto L2;
}
L8:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
goto L4;
L7:;
si0=l16;
si0=i32_load(i->env__memory,(U64)si0);
l4=si0;
si0=l12;
si1=l15;
si1=i32_load(i->env__memory,(U64)si1);
l17=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si0=!(si0);
si1=l4;
si2=l10;
si1=si1 <= si2;
si0|=si1;
if(si0){
goto L2;
}
si0=l13;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+8U);
l4=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l6;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+12U);
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l3;
si1=l4;
si0+=si1;
l4=si0;
si1=4U;
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
l18=si0;
si0=l14;
si1=l4;
si1=i32_load(i->env__memory,(U64)si1);
l4=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=l18;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l7;
si1=l17;
si0+=si1;
si1=l4;
si2=l2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0,si1);
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l6;
si1=1U;
si0-=si1;
l6=si0;
si0=l3;
si1=12U;
si0-=si1;
l3=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L6;
}
UNREACHABLE;
}
L5:;
}
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l8;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l0;
si1=l5;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=7076U;
si1=l11;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l9;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=-64U;
si0-=si1;
i->g0=si0;
goto L0;
}
L3:;
UNREACHABLE;
L2:;
}
UNREACHABLE;
L0:;
}

U32 f5(cartInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l1;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0);
l0=si0;
si0=i32_load(i->env__memory,(U64)si0);
l2=si0;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+8U);
si1=i32_load(i->env__memory,(U64)si1);
si2=l2;
si2=i32_load(i->env__memory,(U64)si2);
si3=l0;
si3=i32_load(i->env__memory,(U64)si3+4U);
si3=i32_load(i->env__memory,(U64)si3);
si2*=si3;
si1+=si2;
si2=l0;
si2=i32_load(i->env__memory,(U64)si2+12U);
si2=i32_load(i->env__memory,(U64)si2);
si1=REM_U(si1,si2);
l0=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l1;
si0=I32_REM_S(si0,si1);
goto L0;
}
L2:;
si0=-1U;
goto L0;
L1:;
UNREACHABLE;
L0:;
return si0;
}

void f34(cartInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U64 l19=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+72U,sj1);
si0=l2;
sj1=W2C2_LL(107374182400U);
i64_store(i->env__memory,(U64)si0+64U,sj1);
si0=l2;
si1=0U;
i32_store(i->env__memory,(U64)si0+168U,si1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+160U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+152U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+144U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+136U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+128U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+120U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+112U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+104U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+96U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+88U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+80U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l12=si0;
si0=7076U;
si1=l2;
si2=-64U;
si1-=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=7080U;
si1=i32_load(i->env__memory,(U64)si1);
l0=si1;
i32_store(i->env__memory,(U64)si0+72U,si1);
si0=l2;
si1=l12;
i32_store(i->env__memory,(U64)si0+64U,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l2;
si1=76U;
si0+=si1;
si1=7080U;
si1=i32_load(i->env__memory,(U64)si1);
l6=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=28U;
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
l0=si0;
si0=l6;
si1=24U;
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
si0=l6;
si0=i32_load(i->env__memory,(U64)si0+20U);
l3=si0;
si0=l2;
si1=92U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
l5=si0;
si0=4U;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=8U;
si1=l1;
i32_store(i->env__memory,(U64)si0,si1);
si0=12U;
si1=l0;
i32_store(i->env__memory,(U64)si0,si1);
si0=16U;
si1=l5;
i32_store(i->env__memory,(U64)si0,si1);
L3:;
{
si0=l4;
si1=160U;
si0=si0 != si1;
if(si0){
si0=l4;
si1=3U;
si0=REM_U(si0,si1);
l1=si0;
si0=0U;
l0=si0;
L7:;
{
si0=l0;
si1=27U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=l0;
si2=4U;
si3=3U;
si4=l0;
si5=l0;
si6=3U;
si5=DIV_U(si5,si6);
si6=-3U;
si5*=si6;
si4+=si5;
si5=l1;
si4|=si5;
si2=si4?si2:si3;
f35(i,si0,si1,si2);
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
goto L7;
}
UNREACHABLE;
}
L6:;
si0=50U;
f36(i,si0);
si0=0U;
l1=si0;
si0=0U;
si1=6U;
si2=84U;
si3=12U;
env__rect(i,si0,si1,si2,si3);
si0=4U;
f36(i,si0);
si0=0U;
si1=157U;
si2=160U;
si3=3U;
env__rect(i,si0,si1,si2,si3);
si0=36U;
f36(i,si0);
si0=l6;
si0=i32_load(i->env__memory,(U64)si0);
l0=si0;
si0=l2;
si1=96U;
si0+=si1;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1+4U);
l4=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=2021U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si1=100U;
si0+=si1;
l8=si0;
si0=l2;
si1=104U;
si0+=si1;
l10=si0;
si0=0U;
l3=si0;
L8:;
{
si0=l3;
si1=4U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=0U;
l5=si0;
si0=0U;
l0=si0;
L9:;
{
si0=l0;
si1=4U;
si0=si0 != si1;
if(si0){
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l7=si0;
si0=l8;
si1=l4;
si1=i32_load(i->env__memory,(U64)si1+8U);
l9=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l9;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
si0=i32_load(i->env__memory,(U64)si0+4U);
l9=si0;
si0=l10;
si1=l7;
si1=i32_load(i->env__memory,(U64)si1);
l7=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l5;
si1=l7;
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
si1=l1;
si0+=si1;
l1=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
goto L9;
}
L10:;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L8;
}
UNREACHABLE;
L5:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
goto L3;
L4:;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
f37(i,si0,si1);
si0=l2;
si1=108U;
si0+=si1;
si1=l2;
si1=i32_load(i->env__memory,(U64)si1+40U);
l0=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=l0;
si2=l2;
si2=i32_load(i->env__memory,(U64)si2+44U);
si3=5U;
f38(i,si0,si1,si2,si3);
si0=l2;
si1=112U;
si0+=si1;
si1=l2;
si1=i32_load(i->env__memory,(U64)si1+32U);
l0=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=6861U;
si2=5U;
si3=l0;
si4=l2;
si4=i32_load(i->env__memory,(U64)si4+36U);
f32(i,si0,si1,si2,si3,si4);
si0=l2;
si1=116U;
si0+=si1;
si1=l2;
si1=i32_load(i->env__memory,(U64)si1+24U);
l0=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l2;
si1=i32_load(i->env__memory,(U64)si1+28U);
si2=2U;
si3=8U;
env__textUtf8(i,si0,si1,si2,si3);
si0=65U;
f36(i,si0);
si0=6875U;
si1=9U;
si2=88U;
si3=0U;
env__textUtf8(i,si0,si1,si2,si3);
si0=66U;
f36(i,si0);
si0=6866U;
si1=9U;
si2=88U;
si3=8U;
env__textUtf8(i,si0,si1,si2,si3);
si0=67U;
f36(i,si0);
si0=6875U;
si1=9U;
si2=88U;
si3=16U;
env__textUtf8(i,si0,si1,si2,si3);
si0=l2;
si1=120U;
si0+=si1;
l13=si0;
si0=l2;
si1=124U;
si0+=si1;
l14=si0;
si0=l2;
si1=128U;
si0+=si1;
l15=si0;
si0=l2;
si1=84U;
si0+=si1;
l16=si0;
si0=0U;
l4=si0;
L11:;
{
si0=l4;
si1=4U;
si0=si0 != si1;
if(si0){
si0=l4;
si1=41U;
si0*=si1;
l0=si0;
si1=35U;
si0+=si1;
l9=si0;
si0=l0;
si1=34U;
si0+=si1;
l17=si0;
si0=l0;
si1=1U;
si0+=si1;
l10=si0;
si0=l0;
si1=2U;
si0+=si1;
l5=si0;
si0=0U;
l8=si0;
si0=57U;
l0=si0;
si0=4U;
l11=si0;
L13:;
{
si0=l0;
si1=185U;
si0=si0 == si1;
if(si0){
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
goto L11;
}
L14:;
si0=l6;
si0=i32_load(i->env__memory,(U64)si0);
l3=si0;
si0=l13;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1+4U);
l1=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si0=!(si0);
si1=l3;
si2=2021U;
si1=si1 != si2;
si0|=si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(i->env__memory,(U64)si0+12U);
l3=si0;
si0=l14;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1+8U);
l1=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l1;
si1=l11;
si0+=si1;
l1=si0;
si0=i32_load(i->env__memory,(U64)si0);
l3=si0;
si0=l15;
si1=l1;
si2=4U;
si1-=si2;
si1=i32_load(i->env__memory,(U64)si1);
l1=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l1;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
l3=si0;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
si0=l0;
si1=25U;
si0-=si1;
l7=si0;
si0=67U;
l1=si0;
si0=l3;
si1=63U;
si0=(U32)((I32)si0>(I32)si1);
l18=si0;
si0=!(si0);
if(si0){
si0=l3;
si1=2U;
si0-=si1;
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
case 2:
goto L17;
case 3:
goto L16;
case 4:
goto L16;
case 5:
goto L16;
case 6:
goto L21;
default:
goto L23;
}
L23:;
si0=l3;
si1=16U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l3;
si1=32U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=52U;
l1=si0;
goto L17;
}
L22:;
si0=l3;
si1=511U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L20;
}
si0=l3;
si1=64U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l3;
si1=128U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l3;
si1=256U;
si0=si0 != si1;
if(si0){
goto L16;
}
L21:;
si0=66U;
l1=si0;
goto L17;
L20:;
si0=l3;
si1=512U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l3;
si1=1024U;
si0=si0 != si1;
si1=0U;
si2=l3;
si3=2048U;
si2=si2 != si3;
si0=si2?si0:si1;
if(si0){
goto L16;
}
si0=68U;
l1=si0;
goto L17;
L19:;
si0=50U;
l1=si0;
goto L17;
L18:;
si0=36U;
l1=si0;
L17:;
si0=l1;
f36(i,si0);
L16:;
si0=l10;
si1=l0;
si2=26U;
si1-=si2;
l1=si1;
si2=35U;
si3=27U;
env__rect(i,si0,si1,si2,si3);
si0=l5;
si1=l7;
si2=67U;
f35(i,si0,si1,si2);
si0=1U;
f36(i,si0);
si0=l10;
si1=l7;
si2=l5;
si3=l1;
env__line(i,si0,si1,si2,si3);
si0=l17;
si1=l1;
si2=l9;
si3=l7;
env__line(i,si0,si1,si2,si3);
si0=l10;
si1=l1;
si2=1U;
f35(i,si0,si1,si2);
si0=l9;
si1=l1;
si2=1U;
f35(i,si0,si1,si2);
si0=l10;
si1=l0;
si2=1U;
f35(i,si0,si1,si2);
si0=l9;
si1=l0;
si2=1U;
f35(i,si0,si1,si2);
si0=l18;
si0=!(si0);
if(si0){
si0=33U;
l1=si0;
si0=l3;
si1=2U;
si0-=si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L24;
case 2:
goto L29;
case 3:
goto L24;
case 4:
goto L24;
case 5:
goto L24;
case 6:
goto L30;
default:
goto L32;
}
L32:;
si0=l3;
si1=16U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l3;
si1=32U;
si0=si0 != si1;
if(si0){
goto L24;
}
goto L26;
}
L31:;
si0=l3;
si1=511U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
si0=l3;
si1=64U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l3;
si1=128U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l3;
si1=256U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=66U;
l1=si0;
goto L25;
}
L33:;
si0=l3;
si1=512U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l3;
si1=1024U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l3;
si1=2048U;
si0=si0 != si1;
if(si0){
goto L24;
}
L30:;
si0=36U;
l1=si0;
goto L25;
L29:;
si0=50U;
l1=si0;
goto L25;
L28:;
si0=64U;
l1=si0;
goto L25;
L27:;
si0=67U;
l1=si0;
goto L25;
L26:;
si0=52U;
l1=si0;
L25:;
si0=l1;
f36(i,si0);
L24:;
si0=6885U;
si1=4U;
si2=l5;
si3=l7;
env__textUtf8(i,si0,si1,si2,si3);
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
f37(i,si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=l2;
si1=i32_load(i->env__memory,(U64)si1+16U);
l1=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(i->env__memory,(U64)si2+20U);
si3=4U;
f38(i,si0,si1,si2,si3);
si0=l16;
si1=l2;
si1=i32_load(i->env__memory,(U64)si1+8U);
l1=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=l2;
si1=i32_load(i->env__memory,(U64)si1+12U);
si2=l5;
si3=l0;
si4=17U;
si3-=si4;
env__textUtf8(i,si0,si1,si2,si3);
si0=6885U;
si1=4U;
si2=l5;
si3=l0;
si4=9U;
si3-=si4;
env__textUtf8(i,si0,si1,si2,si3);
}
L15:;
si0=l11;
si1=12U;
si0+=si1;
l11=si0;
si0=l0;
si1=32U;
si0+=si1;
l0=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
goto L13;
}
UNREACHABLE;
}
L12:;
}
si0=3U;
f36(i,si0);
si0=0U;
si1=28U;
si2=160U;
si3=28U;
env__line(i,si0,si1,si2,si3);
si0=0U;
si1=60U;
si2=160U;
si3=60U;
env__line(i,si0,si1,si2,si3);
si0=0U;
si1=92U;
si2=160U;
si3=92U;
env__line(i,si0,si1,si2,si3);
si0=0U;
si1=124U;
si2=160U;
si3=124U;
env__line(i,si0,si1,si2,si3);
si0=0U;
si1=156U;
si2=160U;
si3=156U;
env__line(i,si0,si1,si2,si3);
si0=2U;
l4=si0;
si0=2U;
f36(i,si0);
si0=0U;
si1=27U;
si2=160U;
si3=27U;
env__line(i,si0,si1,si2,si3);
si0=0U;
si1=59U;
si2=160U;
si3=59U;
env__line(i,si0,si1,si2,si3);
si0=0U;
si1=91U;
si2=160U;
si3=91U;
env__line(i,si0,si1,si2,si3);
si0=0U;
si1=123U;
si2=160U;
si3=123U;
env__line(i,si0,si1,si2,si3);
si0=0U;
si1=155U;
si2=160U;
si3=155U;
env__line(i,si0,si1,si2,si3);
si0=39U;
si1=28U;
si2=39U;
si3=155U;
env__line(i,si0,si1,si2,si3);
si0=80U;
si1=28U;
si2=80U;
si3=155U;
env__line(i,si0,si1,si2,si3);
si0=120U;
l0=si0;
si0=120U;
si1=28U;
si2=120U;
si3=155U;
env__line(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(i->env__memory,(U64)si0+8U);
l1=si0;
si1=124U;
si0=si0 < si1;
if(si0){
si0=33U;
l8=si0;
si0=l2;
si1=88U;
si0+=si1;
si1=l1;
si2=6U;
si1-=si2;
si2=112U;
si1=si1 > si2;
if(si1){
si1=25U;
l5=si1;
si1=10U;
l1=si1;
si1=6796U;
goto L35;
}
L36:;
si1=3U;
l4=si1;
si1=l1;
si2=12U;
si1-=si2;
si2=100U;
si1=si1 > si2;
if(si1){
si1=19U;
l5=si1;
si1=15U;
l1=si1;
si1=115U;
l0=si1;
si1=6821U;
goto L35;
}
L37:;
si1=l1;
si2=18U;
si1-=si2;
si2=88U;
si1=si1 > si2;
if(si1){
si1=13U;
l5=si1;
si1=20U;
l1=si1;
si1=110U;
l0=si1;
si1=50U;
l8=si1;
si1=6840U;
goto L35;
}
L38:;
si1=25U;
si2=30U;
si3=l1;
si4=24U;
si3-=si4;
si4=76U;
si3=si3 > si4;
l3=si3;
si1=si3?si1:si2;
l1=si1;
si1=105U;
si2=100U;
si3=l3;
si1=si3?si1:si2;
l0=si1;
si1=35U;
si2=52U;
si3=l3;
si1=si3?si1:si2;
l8=si1;
si1=4U;
si2=1U;
si3=l3;
si1=si3?si1:si2;
l4=si1;
si1=8U;
l5=si1;
si1=6853U;
L35:;
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l8;
f36(i,si0);
si0=8U;
si1=l0;
si2=144U;
si3=l1;
env__rect(i,si0,si1,si2,si3);
si0=l4;
f36(i,si0);
si0=l3;
si1=l5;
si2=l5;
si3=3U;
si2<<=(si3&31);
si3=-2U;
si2=I32_DIV_S(si2,si3);
si3=80U;
si2+=si3;
si3=l0;
si4=l1;
si5=1U;
si4>>=(si5&31);
si3+=si4;
si4=5U;
si3-=si4;
env__textUtf8(i,si0,si1,si2,si3);
}
L34:;
si0=l2;
si1=132U;
si0+=si1;
si1=7080U;
si1=i32_load(i->env__memory,(U64)si1);
l0=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si0=f39(i,si0);
si1=1U;
si0&=si1;
if(si0){
goto L39;
}
si0=l0;
si0=f40(i,si0);
si1=1U;
si0&=si1;
if(si0){
goto L39;
}
si0=l0;
si0=f41(i,si0);
si1=1U;
si0&=si1;
if(si0){
si0=40U;
f42(i,si0);
goto L39;
}
L40:;
si0=l0;
si0=f43(i,si0);
si1=1U;
si0&=si1;
if(si0){
si0=80U;
f42(i,si0);
goto L39;
}
L41:;
si0=l0;
si0=f44(i,si0);
si1=1U;
si0&=si1;
if(si0){
si0=120U;
f42(i,si0);
goto L39;
}
L42:;
si0=l0;
si0=f45(i,si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L39;
}
si0=160U;
f42(i,si0);
L39:;
si0=l2;
si1=136U;
si0+=si1;
si1=7080U;
si1=i32_load(i->env__memory,(U64)si1);
l0=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=140U;
si0+=si1;
si1=l0;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si0=f39(i,si0);
si1=1U;
si0&=si1;
if(si0){
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
si0=l2;
si1=144U;
si0+=si1;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+4U);
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=2021U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0+8U);
si1=10U;
si0=I32_REM_S(si0,si1);
l1=si0;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l1;
si1=4U;
si0<<=(si1&31);
l1=si0;
si1=6892U;
si0+=si1;
sj0=i64_load(i->env__memory,(U64)si0);
l19=sj0;
si0=l0;
si1=28U;
si0+=si1;
si1=l1;
si2=6900U;
si1+=si2;
sj1=i64_load(i->env__memory,(U64)si1);
i64_store(i->env__memory,(U64)si0,sj1);
si0=l0;
sj1=l19;
i64_store(i->env__memory,(U64)si0+20U,sj1);
goto L43;
}
L44:;
si0=l0;
si0=f40(i,si0);
si1=1U;
si0&=si1;
if(si0){
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
si0=l2;
si1=152U;
si0+=si1;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+4U);
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=5U;
si2=l1;
f46(i,si0,si1,si2);
goto L43;
}
L45:;
si0=l0;
si0=f41(i,si0);
si1=1U;
si0&=si1;
if(si0){
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
si0=l2;
si1=156U;
si0+=si1;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+4U);
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=0U;
si2=l1;
f46(i,si0,si1,si2);
goto L43;
}
L46:;
si0=l0;
si0=f43(i,si0);
si1=1U;
si0&=si1;
if(si0){
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
si0=l2;
si1=160U;
si0+=si1;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+4U);
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=1U;
si2=l1;
f46(i,si0,si1,si2);
goto L43;
}
L47:;
si0=l0;
si0=f44(i,si0);
si1=1U;
si0&=si1;
if(si0){
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
si0=l2;
si1=164U;
si0+=si1;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+4U);
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=2U;
si2=l1;
f46(i,si0,si1,si2);
goto L43;
}
L48:;
si0=l0;
si0=f45(i,si0);
si1=1U;
si0&=si1;
if(si0){
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
si0=l2;
si1=168U;
si0+=si1;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+4U);
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=3U;
si2=l1;
f46(i,si0,si1,si2);
goto L43;
}
L49:;
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
L43:;
si0=l2;
si1=148U;
si0+=si1;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+16U);
l1=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
if(si0){
goto L1;
}
L2:;
UNREACHABLE;
L1:;
si0=7076U;
si1=l12;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0+12U,si1);
si0=l2;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f41(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(i->env__memory,(U64)si0);
si1=64U;
si0&=si1;
if(si0){
si0=l0;
si0=i32_load8_u(i->env__memory,(U64)si0+12U);
si1=64U;
si0&=si1;
si0=!(si0);
}else{
si0=0U;
}
L2:;
goto L0;
L1:;
UNREACHABLE;
L0:;
return si0;
}

void f8(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=0U;
i32_store(i->env__memory,(U64)si0+104U,si1);
si0=l1;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+96U,sj1);
si0=l1;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+84U,sj1);
si0=l1;
si1=0U;
i32_store(i->env__memory,(U64)si0+76U,si1);
si0=l1;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+68U,sj1);
si0=l1;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+60U,sj1);
si0=l1;
sj1=W2C2_LL(13U);
i64_store(i->env__memory,(U64)si0+52U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l10=si0;
si0=7076U;
si1=l1;
si2=48U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=l10;
i32_store(i->env__memory,(U64)si0+48U,si1);
si0=l1;
si1=l1;
si2=44U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+92U,si1);
si0=l1;
si1=l1;
si2=40U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+80U,si1);
si0=l1;
si1=56U;
si0+=si1;
l11=si0;
si0=l1;
si1=-64U;
si0-=si1;
l12=si0;
si0=l1;
si1=68U;
si0+=si1;
l13=si0;
si0=l1;
si1=76U;
si0+=si1;
l14=si0;
si0=l1;
si1=100U;
si0+=si1;
l15=si0;
si0=l1;
si1=104U;
si0+=si1;
l16=si0;
si0=l1;
si1=88U;
si0+=si1;
l17=si0;
si0=l1;
si1=84U;
si0+=si1;
l18=si0;
si0=l1;
si1=72U;
si0+=si1;
l19=si0;
si0=l1;
si1=96U;
si0+=si1;
l20=si0;
L1:;
{
si0=l7;
si1=4U;
si0=si0 != si1;
if(si0){
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l11;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+8U);
l2=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l7;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+12U);
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l2;
si1=l7;
si2=12U;
si1*=si2;
l21=si1;
si0+=si1;
l2=si0;
si0=i32_load(i->env__memory,(U64)si0+4U);
l8=si0;
si0=l1;
si1=60U;
si0+=si1;
si1=l2;
si1=i32_load(i->env__memory,(U64)si1);
l5=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l12;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+8U);
l22=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l7;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+12U);
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
si0=7072U;
l3=si0;
si0=0U;
l6=si0;
si0=0U;
l4=si0;
L5:;
{
si0=l13;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=l8;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(i->env__memory,(U64)si0);
l9=si0;
if(si0){
si0=l1;
si1=l9;
i32_store(i->env__memory,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=l1;
si3=44U;
si2+=si3;
si3=l2;
si4=l6;
si5=4U;
f9(i,si0,si1,si2,si3,si4,si5);
si0=l20;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1+24U);
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si0=i32_load(i->env__memory,(U64)si0+32U);
l6=si0;
si0=l1;
si0=i32_load(i->env__memory,(U64)si0+28U);
l2=si0;
}
L7:;
si0=l19;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
goto L5;
L6:;
}
si0=4U;
si1=l2;
si0-=si1;
l4=si0;
si1=0U;
si2=l4;
si3=0U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l4=si0;
L8:;
{
si0=l14;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
if(si0){
si0=l1;
si1=0U;
i32_store(i->env__memory,(U64)si0+40U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=40U;
si2+=si3;
si3=l2;
si4=l6;
si5=4U;
f9(i,si0,si1,si2,si3,si4,si5);
si0=l18;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1+8U);
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=1U;
si0-=si1;
l4=si0;
si0=l1;
si0=i32_load(i->env__memory,(U64)si0+16U);
l6=si0;
si0=l1;
si0=i32_load(i->env__memory,(U64)si0+12U);
l2=si0;
goto L8;
}
L9:;
}
si0=l2;
si1=1073741823U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l15;
si1=l2;
si2=2U;
si1<<=(si2&31);
si1=f10(i,si1);
l5=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l16;
si1=l5;
i32_store(i->env__memory,(U64)si0,si1);
si0=l17;
si1=l5;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l3;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0,si1);
si0=1U;
l4=si0;
si0=l2;
si1=1U;
si2=l2;
si3=1U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l9=si0;
si0=l3;
si1=4U;
si0+=si1;
l6=si0;
si0=0U;
l3=si0;
goto L3;
}
L4:;
si0=7076U;
si1=l10;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
L10:;
{
si0=l4;
si1=l9;
si0=si0 != si1;
if(si0){
si0=l2;
si1=l4;
si0=si0 == si1;
si1=l2;
si2=l3;
si1=si1 <= si2;
si0|=si1;
if(si0){
goto L2;
}
si0=l6;
si0=i32_load(i->env__memory,(U64)si0);
l8=si0;
si1=l5;
si2=l3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l23=si1;
si1=i32_load(i->env__memory,(U64)si1);
si0=si0 == si1;
if(si0){
si0=l23;
si1=l8;
si2=1U;
si1<<=(si2&31);
i32_store(i->env__memory,(U64)si0,si1);
goto L12;
}
L13:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l5;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
i32_store(i->env__memory,(U64)si0,si1);
L12:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
goto L10;
}
L11:;
}
si0=l21;
si1=l22;
si0+=si1;
l3=si0;
si1=l2;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l3;
si1=l2;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l3;
si1=l5;
i32_store(i->env__memory,(U64)si0,si1);
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
goto L1;
L2:;
}
UNREACHABLE;
L0:;
}

void f18(cartInstance*i) {
U32 l0=0;
U32 l1=0;
U32 si0,si1,si2,si3;
si0=7052U;
si1=7052U;
si1=i32_load(i->env__memory,(U64)si1);
si2=15U;
si1+=si2;
si2=-16U;
si1&=si2;
l1=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=7060U;
si1=7056U;
si1=i32_load(i->env__memory,(U64)si1);
l0=si1;
si2=l0;
si3=l1;
si2-=si3;
si3=6U;
si2>>=(si3&31);
si1-=si2;
l0=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=7068U;
si1=l0;
si2=l1;
si1-=si2;
si2=4U;
si1>>=(si2&31);
i32_store(i->env__memory,(U64)si0,si1);
L0:;
}

void f11(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=0U;
i32_store(i->env__memory,(U64)si0+44U,si1);
si0=l1;
si1=0U;
i32_store(i->env__memory,(U64)si0+36U,si1);
si0=l1;
sj1=W2C2_LL(4U);
i64_store(i->env__memory,(U64)si0+28U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l6=si0;
si0=7076U;
si1=l1;
si2=24U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=l6;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=l1;
si1=l1;
si2=12U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+40U,si1);
si0=7072U;
l2=si0;
si0=4U;
l4=si0;
si0=l1;
si1=32U;
si0+=si1;
l7=si0;
si0=l1;
si1=44U;
si0+=si1;
l8=si0;
L1:;
{
si0=l7;
si1=l2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
if(si0){
si0=l1;
si1=36U;
si0+=si1;
si1=16U;
si1=f10(i,si1);
l9=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=l9;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l1;
sj1=W2C2_LL(17179869188U);
i64_store(i->env__memory,(U64)si0+16U,sj1);
si0=l1;
si1=l2;
si2=l1;
si3=12U;
si2+=si3;
si3=l3;
si4=l5;
si5=12U;
f9(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1);
l2=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=1U;
si0-=si1;
l4=si0;
si0=l1;
si0=i32_load(i->env__memory,(U64)si0+8U);
l5=si0;
si0=l1;
si0=i32_load(i->env__memory,(U64)si0+4U);
l3=si0;
goto L1;
}
L2:;
}
si0=7076U;
si1=l6;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f35(cartInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3;
si0=l2;
f36(i,si0);
si0=l0;
si1=l1;
si2=l0;
si3=l1;
env__line(i,si0,si1,si2,si3);
L0:;
}

U32 f21(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
L1:;
{
si0=l0;
si0=f15(i,si0);
l1=si0;
si0=l0;
si1=1U;
si0-=si1;
l2=si0;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
}
si0=l2;
si1=1U;
si0+=si1;
L0:;
return si0;
}

void f14(cartInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
L1:;
{
si0=l0;
si1=l1;
si0=si0 >= si1;
si0=!(si0);
if(si0){
si0=l0;
si0=i32_load(i->env__memory,(U64)si0);
l2=si0;
si0=f20(i,si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=7052U;
si1=i32_load(i->env__memory,(U64)si1);
si0-=si1;
si1=4U;
si0>>=(si1&31);
l2=si0;
si0=f15(i,si0);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=f21(i,si0);
l2=si0;
si0=f15(i,si0);
si1=255U;
si0&=si1;
si1=3U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
f17(i,si0);
L3:;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
goto L1;
}
L2:;
}
L0:;
}

void f46(cartInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=W2C2_LL(1U);
i64_store(i->env__memory,(U64)si0+20U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l4=si0;
si0=7076U;
si1=l3;
si2=16U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=l4;
i32_store(i->env__memory,(U64)si0+16U,si1);
si0=l2;
si1=2021U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L6;
case 3:
goto L5;
case 4:
goto L2;
case 5:
goto L4;
default:
goto L2;
}
L8:;
si0=l0;
f13(i,si0);
si0=l0;
f6(i,si0);
si0=l0;
f13(i,si0);
goto L3;
L7:;
si0=l0;
f6(i,si0);
goto L3;
L6:;
si0=l0;
f12(i,si0);
si0=l0;
f8(i,si0);
si0=l0;
f12(i,si0);
goto L3;
L5:;
si0=l0;
f8(i,si0);
goto L3;
L4:;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f11(i,si0);
si0=l3;
sj0=i64_load(i->env__memory,(U64)si0+4U);
l5=sj0;
si0=l0;
si1=l3;
si1=i32_load(i->env__memory,(U64)si1);
l1=si1;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
sj1=l5;
i64_store(i->env__memory,(U64)si0+12U,sj1);
si0=l0;
f4(i,si0);
L3:;
si0=l0;
f4(i,si0);
L2:;
si0=7076U;
si1=l4;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
UNREACHABLE;
L0:;
}

void f32(cartInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=-64U;
si0+=si1;
l5=si0;
i->g0=si0;
si0=l5;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+56U,sj1);
si0=l5;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+48U,sj1);
si0=l5;
si1=6U;
i32_store(i->env__memory,(U64)si0+36U,si1);
si0=l5;
si1=l1;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l5;
si1=l2;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l5;
si1=l3;
i32_store(i->env__memory,(U64)si0+16U,si1);
si0=l5;
si1=l4;
i32_store(i->env__memory,(U64)si0+20U,si1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l6=si0;
si0=7076U;
si1=l5;
si2=32U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store(i->env__memory,(U64)si0+32U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+44U,si1);
si0=l2;
si0=!(si0);
if(si0){
si0=7076U;
si1=l6;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=l5;
si1=-64U;
si0-=si1;
i->g0=si0;
goto L0;
}
L1:;
si0=l4;
if(si0){
si0=l5;
si1=56U;
si0+=si1;
si1=l2;
si2=l4;
si1+=si2;
l8=si1;
si1=f10(i,si1);
l7=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l5;
si1=60U;
si0+=si1;
si1=l7;
i32_store(i->env__memory,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=l7;
i32_store(i->env__memory,(U64)si0,si1);
si0=l7;
si1=l1;
si2=l2;
si0=f47(i,si0,si1,si2);
l1=si0;
si1=l2;
si0+=si1;
si1=l3;
si2=l4;
si0=f47(i,si0,si1,si2);
si0=7076U;
si1=l6;
i32_store(i->env__memory,(U64)si0,si1);
si0=l5;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+24U,sj1);
si0=l5;
si1=52U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l5;
si1=-64U;
si0-=si1;
i->g0=si0;
goto L0;
}
L2:;
si0=7076U;
si1=l6;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l5;
si1=-64U;
si0-=si1;
i->g0=si0;
L0:;
}

U32 f45(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(i->env__memory,(U64)si0);
si1=16U;
si0&=si1;
if(si0){
si0=l0;
si0=i32_load8_u(i->env__memory,(U64)si0+12U);
si1=16U;
si0&=si1;
si0=!(si0);
}else{
si0=0U;
}
L2:;
goto L0;
L1:;
UNREACHABLE;
L0:;
return si0;
}

U32 f10(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
if(si0){
si0=l0;
si1=15U;
si0+=si1;
si1=4U;
si0>>=(si1&31);
l5=si0;
si0=7064U;
si0=i32_load(i->env__memory,(U64)si0);
l2=si0;
l4=si0;
L2:;
{
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L6;
default:
goto L5;
}
L6:;
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
L7:;
{
si0=l1;
if(si0){
si0=l1;
si1=8U;
si0+=si1;
l3=si0;
si1=l3;
si2=l1;
si2=i32_load(i->env__memory,(U64)si2+4U);
si3=2U;
si2<<=(si3&31);
si1+=si2;
f14(i,si0,si1);
si0=l1;
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
goto L7;
}
L8:;
}
si0=6560U;
si1=9136U;
f14(i,si0,si1);
L9:;
{
si0=7073U;
si0=i32_load8_u(i->env__memory,(U64)si0);
si0=!(si0);
if(si0){
si0=0U;
l3=si0;
si0=0U;
l1=si0;
L11:;
{
si0=7068U;
si0=i32_load(i->env__memory,(U64)si0);
si1=l1;
si0=si0 <= si1;
if(si0){
si0=2U;
l1=si0;
goto L3;
}else{
si0=l1;
si0=f15(i,si0);
si1=255U;
si0&=si1;
si1=1U;
si0-=si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L16;
case 2:
goto L14;
default:
goto L13;
}
L16:;
si0=l3;
si1=1U;
si0&=si1;
l2=si0;
si0=0U;
l3=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L13;
}
L15:;
si0=l1;
f16(i,si0);
si0=1U;
l3=si0;
goto L13;
L14:;
si0=0U;
l3=si0;
si0=7060U;
si0=i32_load(i->env__memory,(U64)si0);
si1=l1;
si2=2U;
si1>>=(si2&31);
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load8_u(i->env__memory,(U64)si1);
si2=2U;
si3=l1;
si4=1U;
si3<<=(si4&31);
si4=6U;
si3&=si4;
si2<<=(si3&31);
si3=-1U;
si2^=si3;
si1&=si2;
i32_store8(i->env__memory,(U64)si0,si1);
L13:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L11;
}
L12:;
UNREACHABLE;
}
UNREACHABLE;
}
L10:;
si0=0U;
l1=si0;
si0=7073U;
si1=0U;
i32_store8(i->env__memory,(U64)si0,si1);
L17:;
{
si0=l1;
si1=7068U;
si1=i32_load(i->env__memory,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l1;
si0=f15(i,si0);
si1=255U;
si0&=si1;
si1=3U;
si0=si0 == si1;
if(si0){
si0=l1;
f17(i,si0);
}
L18:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L17;
}
UNREACHABLE;
}
UNREACHABLE;
L5:;
si0=(*i->env__memory).pages;
si0=wasmMemoryGrow(i->env__memory,si0);
si1=-1U;
si0=si0 != si1;
if(si0){
si0=(*i->env__memory).pages;
l2=si0;
si0=7056U;
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
si0=7056U;
si1=l2;
si2=16U;
si1<<=(si2&31);
i32_store(i->env__memory,(U64)si0,si1);
si0=7060U;
si0=i32_load(i->env__memory,(U64)si0);
l2=si0;
f18(i);
si0=7060U;
si0=i32_load(i->env__memory,(U64)si0);
si1=l2;
si2=l1;
si3=l2;
si2-=si3;
si0=f47(i,si0,si1,si2);
goto L4;
}
L19:;
UNREACHABLE;
L4:;
si0=l3;
l1=si0;
L3:;
si0=0U;
si1=l4;
si2=l4;
si3=7068U;
si3=i32_load(i->env__memory,(U64)si3);
si2=si2 == si3;
l3=si2;
si0=si2?si0:si1;
l2=si0;
si0=f15(i,si0);
si1=255U;
si0&=si1;
if(si0){
si0=l2;
si1=1U;
si0+=si1;
l4=si0;
si0=0U;
l6=si0;
goto L20;
}
L21:;
si0=l2;
si1=1U;
si0+=si1;
l4=si0;
si0=1U;
si1=l6;
si2=1U;
si1+=si2;
si2=l3;
si0=si2?si0:si1;
l6=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=7064U;
si1=l4;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=l5;
si0-=si1;
l3=si0;
si1=1U;
f19(i,si0,si1);
si0=l2;
si1=l5;
si0-=si1;
si1=2U;
si0+=si1;
l1=si0;
L22:;
{
si0=l1;
si1=7064U;
si1=i32_load(i->env__memory,(U64)si1);
si0=si0 == si1;
si0=!(si0);
if(si0){
si0=l1;
si1=2U;
f19(i,si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L22;
}
L23:;
}
si0=7052U;
si0=i32_load(i->env__memory,(U64)si0);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si0=f49(i,si0,si1);
goto L0;
L20:;
si0=7064U;
si0=i32_load(i->env__memory,(U64)si0);
l2=si0;
si0=l1;
l3=si0;
goto L2;
}
UNREACHABLE;
}
L1:;
si0=7072U;
L0:;
return si0;
}

void f13(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=-64U;
si0+=si1;
l1=si0;
i->g0=si0;
si0=l1;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+52U,sj1);
si0=l1;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+44U,sj1);
si0=l1;
si1=0U;
i32_store(i->env__memory,(U64)si0+36U,si1);
si0=l1;
sj1=W2C2_LL(7U);
i64_store(i->env__memory,(U64)si0+28U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l10=si0;
si0=7076U;
si1=l1;
si2=24U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=l10;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=l1;
si1=l1;
si2=12U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+40U,si1);
si0=7072U;
l6=si0;
si0=4U;
l2=si0;
si0=l1;
si1=32U;
si0+=si1;
l3=si0;
si0=l1;
si1=44U;
si0+=si1;
l5=si0;
L1:;
{
si0=l3;
si1=l6;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
if(si0){
si0=l1;
si1=36U;
si0+=si1;
si1=16U;
si1=f10(i,si1);
l9=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=l9;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l1;
sj1=W2C2_LL(17179869188U);
i64_store(i->env__memory,(U64)si0+16U,sj1);
si0=l1;
si1=l6;
si2=l1;
si3=12U;
si2+=si3;
si3=l7;
si4=l8;
si5=12U;
f9(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1);
l6=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=1U;
si0-=si1;
l2=si0;
si0=l1;
si0=i32_load(i->env__memory,(U64)si0+8U);
l8=si0;
si0=l1;
si0=i32_load(i->env__memory,(U64)si0+4U);
l7=si0;
goto L1;
}else{
si0=0U;
l3=si0;
si0=l1;
si1=48U;
si0+=si1;
l9=si0;
si0=l1;
si1=52U;
si0+=si1;
l11=si0;
si0=l1;
si1=56U;
si0+=si1;
l12=si0;
L4:;
{
si0=l3;
si1=4U;
si0=si0 != si1;
if(si0){
si0=l6;
si1=3U;
si2=l3;
si1-=si2;
l13=si1;
si2=12U;
si1*=si2;
si0+=si1;
l14=si0;
si1=4U;
si0+=si1;
l15=si0;
si0=0U;
l5=si0;
si0=0U;
l2=si0;
L6:;
{
si0=l2;
si1=4U;
si0=si0 != si1;
if(si0){
si0=l7;
si1=l13;
si0=si0 > si1;
if(si0){
goto L7;
}
goto L2;
}
L8:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L4;
L7:;
si0=l15;
si0=i32_load(i->env__memory,(U64)si0);
l4=si0;
si0=l9;
si1=l14;
si1=i32_load(i->env__memory,(U64)si1);
l16=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si0=!(si0);
si1=l2;
si2=l4;
si1=si1 >= si2;
si0|=si1;
if(si0){
goto L2;
}
si0=l11;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+8U);
l4=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+12U);
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l4;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
l4=si0;
si0=i32_load(i->env__memory,(U64)si0+4U);
l17=si0;
si0=l12;
si1=l4;
si1=i32_load(i->env__memory,(U64)si1);
l4=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=l17;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l5;
si1=l16;
si0+=si1;
si1=l4;
si2=l5;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
goto L6;
}
UNREACHABLE;
}
L5:;
}
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l7;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=7076U;
si1=l10;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l8;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=-64U;
si0-=si1;
i->g0=si0;
goto L0;
}
L3:;
UNREACHABLE;
L2:;
}
UNREACHABLE;
L0:;
}

void f6(cartInstance*i,U32 l0) {
U32 si0;
si0=l0;
f7(i,si0);
si0=l0;
f8(i,si0);
si0=l0;
f7(i,si0);
si0=l0;
f7(i,si0);
si0=l0;
f7(i,si0);
L0:;
}

void f23(cartInstance*i,U32 l0) {
L0:;
}

void f19(cartInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=7060U;
si0=i32_load(i->env__memory,(U64)si0);
si1=l0;
si2=2U;
si1>>=(si2&31);
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load8_u(i->env__memory,(U64)si1);
si2=l1;
si3=l0;
si4=1U;
si3<<=(si4&31);
si4=6U;
si3&=si4;
si2<<=(si3&31);
si1|=si2;
i32_store8(i->env__memory,(U64)si0,si1);
L0:;
}

U32 f44(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(i->env__memory,(U64)si0);
si1=32U;
si0&=si1;
if(si0){
si0=l0;
si0=i32_load8_u(i->env__memory,(U64)si0+12U);
si1=32U;
si0&=si1;
si0=!(si0);
}else{
si0=0U;
}
L2:;
goto L0;
L1:;
UNREACHABLE;
L0:;
return si0;
}

void f38(cartInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+36U,sj1);
si0=l4;
sj1=W2C2_LL(3U);
i64_store(i->env__memory,(U64)si0+28U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l5=si0;
si0=7076U;
si1=l4;
si2=24U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=l3;
si1=l2;
si0-=si1;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
si0=l4;
si1=32U;
si0+=si1;
l8=si0;
si0=l4;
si1=36U;
si0+=si1;
l9=si0;
L2:;
{
si0=l8;
si1=l6;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
si0=l4;
si1=16U;
si0+=si1;
si1=l6;
si2=l7;
si3=6884U;
si4=1U;
f32(i,si0,si1,si2,si3,si4);
si0=l9;
si1=l4;
si1=i32_load(i->env__memory,(U64)si1+16U);
l6=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=1U;
si0-=si1;
l3=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l7=si0;
goto L2;
}
L3:;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=l7;
si3=l1;
si4=l2;
f32(i,si0,si1,si2,si3,si4);
si0=7076U;
si1=l5;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=l4;
si1=i32_load(i->env__memory,(U64)si1+8U);
l1=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l4;
si1=i32_load(i->env__memory,(U64)si1+12U);
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
}
L1:;
si0=7076U;
si1=l5;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f20(cartInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=7052U;
si1=i32_load(i->env__memory,(U64)si1);
si0=si0 >= si1;
if(si0){
si0=7060U;
si0=i32_load(i->env__memory,(U64)si0);
si1=l0;
si0=si0 > si1;
}else{
si0=0U;
}
L1:;
L0:;
return si0;
}

U32 f25(cartInstance*i,U32 l0,U32 l1) {
UNREACHABLE;
L0:;
}

U32 f26(cartInstance*i,U32 l0,U32 l1,U32 l2) {
UNREACHABLE;
L0:;
}

U32 f27(cartInstance*i,U32 l0) {
UNREACHABLE;
L0:;
}

void f30(cartInstance*i) {
UNREACHABLE;
L0:;
}

U32 f47(cartInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l2;
si0=!(si0);
si1=l1;
si2=3U;
si1&=si2;
si1=!(si1);
si0|=si1;
si0=!(si0);
if(si0){
si0=l0;
l3=si0;
L3:;
{
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l2;
si1=1U;
si0-=si1;
l4=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
l2=si0;
si0=l1;
si1=3U;
si0&=si1;
if(si0){
goto L3;
}
}
goto L1;
}
L2:;
si0=l2;
l4=si0;
si0=l0;
l3=si0;
L1:;
si0=l3;
si1=3U;
si0&=si1;
l2=si0;
si0=!(si0);
if(si0){
si0=l4;
si1=16U;
si0=si0 >= si1;
if(si0){
L7:;
{
si0=l3;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l4;
si1=16U;
si0-=si1;
l4=si0;
si1=15U;
si0=si0 > si1;
if(si0){
goto L7;
}
}
}
L6:;
si0=l4;
si1=8U;
si0&=si1;
if(si0){
si0=l3;
si1=l1;
sj1=i64_load(i->env__memory,(U64)si1);
i64_store(i->env__memory,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
}
L8:;
si0=l4;
si1=4U;
si0&=si1;
if(si0){
si0=l3;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
}
L9:;
si0=l4;
si1=2U;
si0&=si1;
if(si0){
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+1U);
i32_store8(i->env__memory,(U64)si0+1U,si1);
si0=l3;
si1=2U;
si0+=si1;
l3=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
}
L10:;
si0=l4;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l0;
goto L0;
}
L5:;
si0=l4;
si1=32U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l2;
si1=1U;
si0-=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
case 2:
goto L12;
default:
goto L11;
}
L14:;
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+1U);
i32_store8(i->env__memory,(U64)si0+1U,si1);
si0=l3;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1);
l5=si1;
i32_store8(i->env__memory,(U64)si0,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+2U);
i32_store8(i->env__memory,(U64)si0+2U,si1);
si0=l4;
si1=3U;
si0-=si1;
l4=si0;
si0=l3;
si1=3U;
si0+=si1;
l8=si0;
si0=0U;
l2=si0;
L15:;
{
si0=l2;
si1=l8;
si0+=si1;
l3=si0;
si1=l1;
si2=l2;
si1+=si2;
l6=si1;
si2=4U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
l7=si1;
si2=8U;
si1<<=(si2&31);
si2=l5;
si3=24U;
si2>>=(si3&31);
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
l5=si1;
si2=8U;
si1<<=(si2&31);
si2=l7;
si3=24U;
si2>>=(si3&31);
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
l7=si1;
si2=8U;
si1<<=(si2&31);
si2=l5;
si3=24U;
si2>>=(si3&31);
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
l5=si1;
si2=8U;
si1<<=(si2&31);
si2=l7;
si3=24U;
si2>>=(si3&31);
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l4;
si1=16U;
si0-=si1;
l4=si0;
si1=16U;
si0=si0 > si1;
if(si0){
goto L15;
}
}
si0=l2;
si1=l8;
si0+=si1;
l3=si0;
si0=l1;
si1=l2;
si0+=si1;
si1=3U;
si0+=si1;
l1=si0;
goto L11;
L13:;
si0=l3;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1);
l5=si1;
i32_store8(i->env__memory,(U64)si0,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+1U);
i32_store8(i->env__memory,(U64)si0+1U,si1);
si0=l4;
si1=2U;
si0-=si1;
l4=si0;
si0=l3;
si1=2U;
si0+=si1;
l8=si0;
si0=0U;
l2=si0;
L16:;
{
si0=l2;
si1=l8;
si0+=si1;
l3=si0;
si1=l1;
si2=l2;
si1+=si2;
l6=si1;
si2=4U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
l7=si1;
si2=16U;
si1<<=(si2&31);
si2=l5;
si3=16U;
si2>>=(si3&31);
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
l5=si1;
si2=16U;
si1<<=(si2&31);
si2=l7;
si3=16U;
si2>>=(si3&31);
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
l7=si1;
si2=16U;
si1<<=(si2&31);
si2=l5;
si3=16U;
si2>>=(si3&31);
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
l5=si1;
si2=16U;
si1<<=(si2&31);
si2=l7;
si3=16U;
si2>>=(si3&31);
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l4;
si1=16U;
si0-=si1;
l4=si0;
si1=17U;
si0=si0 > si1;
if(si0){
goto L16;
}
}
si0=l2;
si1=l8;
si0+=si1;
l3=si0;
si0=l1;
si1=l2;
si0+=si1;
si1=2U;
si0+=si1;
l1=si0;
goto L11;
L12:;
si0=l3;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1);
l5=si1;
i32_store8(i->env__memory,(U64)si0,si1);
si0=l4;
si1=1U;
si0-=si1;
l4=si0;
si0=l3;
si1=1U;
si0+=si1;
l8=si0;
si0=0U;
l2=si0;
L17:;
{
si0=l2;
si1=l8;
si0+=si1;
l3=si0;
si1=l1;
si2=l2;
si1+=si2;
l6=si1;
si2=4U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
l7=si1;
si2=24U;
si1<<=(si2&31);
si2=l5;
si3=8U;
si2>>=(si3&31);
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
l5=si1;
si2=24U;
si1<<=(si2&31);
si2=l7;
si3=8U;
si2>>=(si3&31);
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
l7=si1;
si2=24U;
si1<<=(si2&31);
si2=l5;
si3=8U;
si2>>=(si3&31);
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
l5=si1;
si2=24U;
si1<<=(si2&31);
si2=l7;
si3=8U;
si2>>=(si3&31);
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l4;
si1=16U;
si0-=si1;
l4=si0;
si1=18U;
si0=si0 > si1;
if(si0){
goto L17;
}
}
si0=l2;
si1=l8;
si0+=si1;
l3=si0;
si0=l1;
si1=l2;
si0+=si1;
si1=1U;
si0+=si1;
l1=si0;
L11:;
si0=l4;
si1=16U;
si0&=si1;
if(si0){
si0=l3;
si1=l1;
si1=i32_load16_u(i->env__memory,(U64)si1);
i32_store16(i->env__memory,(U64)si0,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+2U);
i32_store8(i->env__memory,(U64)si0+2U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+3U);
i32_store8(i->env__memory,(U64)si0+3U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+4U);
i32_store8(i->env__memory,(U64)si0+4U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+5U);
i32_store8(i->env__memory,(U64)si0+5U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+6U);
i32_store8(i->env__memory,(U64)si0+6U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+7U);
i32_store8(i->env__memory,(U64)si0+7U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+8U);
i32_store8(i->env__memory,(U64)si0+8U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+9U);
i32_store8(i->env__memory,(U64)si0+9U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+10U);
i32_store8(i->env__memory,(U64)si0+10U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+11U);
i32_store8(i->env__memory,(U64)si0+11U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+12U);
i32_store8(i->env__memory,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+13U);
i32_store8(i->env__memory,(U64)si0+13U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+14U);
i32_store8(i->env__memory,(U64)si0+14U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+15U);
i32_store8(i->env__memory,(U64)si0+15U,si1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
}
L18:;
si0=l4;
si1=8U;
si0&=si1;
if(si0){
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+1U);
i32_store8(i->env__memory,(U64)si0+1U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+2U);
i32_store8(i->env__memory,(U64)si0+2U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+3U);
i32_store8(i->env__memory,(U64)si0+3U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+4U);
i32_store8(i->env__memory,(U64)si0+4U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+5U);
i32_store8(i->env__memory,(U64)si0+5U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+6U);
i32_store8(i->env__memory,(U64)si0+6U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+7U);
i32_store8(i->env__memory,(U64)si0+7U,si1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
}
L19:;
si0=l4;
si1=4U;
si0&=si1;
if(si0){
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+1U);
i32_store8(i->env__memory,(U64)si0+1U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+2U);
i32_store8(i->env__memory,(U64)si0+2U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+3U);
i32_store8(i->env__memory,(U64)si0+3U,si1);
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
}
L20:;
si0=l4;
si1=2U;
si0&=si1;
if(si0){
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1+1U);
i32_store8(i->env__memory,(U64)si0+1U,si1);
si0=l3;
si1=2U;
si0+=si1;
l3=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
}
L21:;
si0=l4;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
L4:;
si0=l0;
L0:;
return si0;
}

void f48(cartInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si0-=si1;
si1=l2;
si0-=si1;
si1=0U;
si2=l2;
si3=1U;
si2<<=(si3&31);
si1-=si2;
si0=si0 <= si1;
if(si0){
si0=l0;
si1=l1;
si2=l2;
si0=f47(i,si0,si1,si2);
goto L1;
}
L2:;
si0=l0;
si1=l1;
si0^=si1;
si1=3U;
si0&=si1;
l3=si0;
si0=l0;
si1=l1;
si0=si0 < si1;
if(si0){
si0=l3;
if(si0){
si0=l0;
l3=si0;
goto L3;
}
L6:;
si0=l0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
si0=l0;
l3=si0;
goto L4;
}
L7:;
si0=l0;
l3=si0;
L8:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0-=si1;
l2=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=3U;
si0&=si1;
if(si0){
goto L8;
}
}
goto L4;
}
L5:;
si0=l3;
if(si0){
si0=l2;
l3=si0;
goto L9;
}
L10:;
si0=l0;
si1=l2;
si0+=si1;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
si0=l2;
l3=si0;
goto L11;
}
L12:;
si0=l1;
si1=1U;
si0-=si1;
l4=si0;
si0=l0;
si1=1U;
si0-=si1;
l5=si0;
L13:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l5;
si0+=si1;
l6=si0;
si1=l2;
si2=l4;
si1+=si2;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l2;
si1=1U;
si0-=si1;
l3=si0;
l2=si0;
si0=l6;
si1=3U;
si0&=si1;
if(si0){
goto L13;
}
}
L11:;
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l0;
si1=4U;
si0-=si1;
l2=si0;
si0=l1;
si1=4U;
si0-=si1;
l4=si0;
L14:;
{
si0=l2;
si1=l3;
si0+=si1;
si1=l3;
si2=l4;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=4U;
si0-=si1;
l3=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L14;
}
}
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si0-=si1;
l1=si0;
si0=l0;
si1=1U;
si0-=si1;
l0=si0;
L15:;
{
si0=l0;
si1=l3;
si0+=si1;
si1=l1;
si2=l3;
si1+=si2;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l3;
si1=1U;
si0-=si1;
l3=si0;
if(si0){
goto L15;
}
}
goto L1;
L4:;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L3;
}
L16:;
{
si0=l3;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l2;
si1=4U;
si0-=si1;
l2=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L16;
}
}
L3:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L17:;
{
si0=l3;
si1=l1;
si1=i32_load8_u(i->env__memory,(U64)si1);
i32_store8(i->env__memory,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0-=si1;
l2=si0;
if(si0){
goto L17;
}
}
L1:;
L0:;
}

U32 f43(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_s(i->env__memory,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
si0=l0;
si0=i32_load8_s(i->env__memory,(U64)si0+12U);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
}else{
si0=0U;
}
L2:;
goto L0;
L1:;
UNREACHABLE;
L0:;
return si0;
}

void f29(cartInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=0U;
i32_store(i->env__memory,(U64)si0+28U,si1);
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+20U,sj1);
si0=l0;
sj1=W2C2_LL(4U);
i64_store(i->env__memory,(U64)si0+12U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l2=si0;
si0=7076U;
si1=l0;
si2=8U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l0;
si1=24U;
si0+=si1;
l3=si0;
si0=l0;
si1=16U;
si0+=si1;
l4=si0;
si0=l0;
si1=20U;
si0+=si1;
l5=si0;
si0=l0;
si1=28U;
si0+=si1;
l6=si0;
L1:;
{
si0=7074U;
si0=i32_load8_u(i->env__memory,(U64)si0);
if(si0){
goto L2;
}
si0=l3;
si1=7084U;
si1=i32_load(i->env__memory,(U64)si1);
l1=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=l1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=7084U;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1);
l7=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l5;
si1=l7;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=0U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l6;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1+16U);
l1=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1);
TF(i->t0,si1,void (*)(cartInstance*,U32))(i,si0);
goto L1;
L2:;
}
si0=7076U;
si1=l2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9(cartInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=0U;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l7;
sj1=W2C2_LL(2U);
i64_store(i->env__memory,(U64)si0+4U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l8=si0;
si0=7076U;
si1=l7;
i32_store(i->env__memory,(U64)si0,si1);
si0=l7;
si1=l8;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l9=si1;
si0=si0 >= si1;
if(si0){
si0=l1;
l6=si0;
goto L1;
}
L2:;
si0=l4;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=1U;
si2=l4;
si0=si2?si0:si1;
l6=si0;
L3:;
{
si0=l6;
l4=si0;
si1=1U;
si0<<=(si1&31);
l6=si0;
si0=l4;
si1=l9;
si0=si0 < si1;
if(si0){
goto L3;
}
}
si0=l7;
si1=8U;
si0+=si1;
si1=l4;
si2=l5;
si1*=si2;
si1=f10(i,si1);
l6=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=l1;
si2=l3;
si3=l5;
si2*=si3;
si0=f47(i,si0,si1,si2);
L1:;
si0=7076U;
si1=l8;
i32_store(i->env__memory,(U64)si0,si1);
si0=l7;
si1=12U;
si0+=si1;
si1=l6;
i32_store(i->env__memory,(U64)si0,si1);
si0=l6;
si1=l3;
si2=l5;
si1*=si2;
si0+=si1;
si1=l2;
si2=l5;
f48(i,si0,si1,si2);
si0=l0;
si1=l4;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l0;
si1=l9;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(i->env__memory,(U64)si0,si1);
si0=l7;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f33(cartInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
sj1=W2C2_LL(60129542144U);
i64_store(i->env__memory,(U64)si0+32U,sj1);
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+88U,sj1);
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+80U,sj1);
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+72U,sj1);
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+64U,sj1);
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+56U,sj1);
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+48U,sj1);
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+40U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l3=si0;
si0=7076U;
si1=l0;
si2=32U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(i->env__memory,(U64)si0+32U,si1);
si0=l0;
si1=32U;
si1=f10(i,si1);
l2=si1;
i32_store(i->env__memory,(U64)si0+76U,si1);
si0=l0;
si1=l2;
i32_store(i->env__memory,(U64)si0+80U,si1);
si0=l0;
si1=l2;
i32_store(i->env__memory,(U64)si0+40U,si1);
si0=l0;
f11(i,si0);
si0=l0;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1);
l8=si1;
i32_store(i->env__memory,(U64)si0+44U,si1);
si0=l0;
sj0=i64_load(i->env__memory,(U64)si0+4U);
l9=sj0;
si0=4U;
si0=f10(i,si0);
l4=si0;
si1=1103515245U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(i->env__memory,(U64)si0+48U,si1);
si0=4U;
si0=f10(i,si0);
l5=si0;
si1=12345U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(i->env__memory,(U64)si0+52U,si1);
si0=4U;
si0=f10(i,si0);
l6=si0;
si1=-2147483648U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(i->env__memory,(U64)si0+56U,si1);
si0=4U;
si0=f10(i,si0);
l7=si0;
si1=478194671U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(i->env__memory,(U64)si0+60U,si1);
si0=16U;
si0=f10(i,si0);
l1=si0;
si1=l6;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l1;
si1=l5;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l1;
si1=l4;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l1;
si1=l7;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
sj1=l9;
i64_store(i->env__memory,(U64)si0+12U,sj1);
si0=l2;
si1=l8;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l2;
si1=1U;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l2;
si1=l1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0+68U,si1);
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0+72U,si1);
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0+64U,si1);
si0=l2;
f4(i,si0);
si0=l2;
f4(i,si0);
si0=l0;
si1=l0;
si2=16U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+84U,si1);
si0=l0;
si1=24U;
si0+=si1;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0,sj1);
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+16U,sj1);
si0=36U;
si0=f10(i,si0);
l1=si0;
si0=7076U;
si1=l3;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=8142680U;
i32_store(i->env__memory,(U64)si0+32U,si1);
si0=l1;
sj1=W2C2_LL(66264744028907637U);
i64_store(i->env__memory,(U64)si0+24U,sj1);
si0=l1;
sj1=W2C2_LL(72047505159749654U);
i64_store(i->env__memory,(U64)si0+16U,sj1);
si0=l1;
si1=l2;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l1;
si1=2021U;
i32_store(i->env__memory,(U64)si0,si1);
si0=7080U;
si1=l1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0+88U,si1);
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0+92U,si1);
si0=l0;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f31(cartInstance*i) {
f29(i);
L0:;
}

void f36(cartInstance*i,U32 l0) {
U32 si0,si1;
si0=20U;
si1=l0;
i32_store16(i->env__memory,(U64)si0,si1);
L0:;
}

void f42(cartInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=8U;
si0+=si1;
si1=36U;
si0=f49(i,si0,si1);
si0=l0;
si1=524288U;
si2=0U;
si3=2U;
env__tone(i,si0,si1,si2,si3);
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f40(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(i->env__memory,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
si0=l0;
si0=i32_load8_u(i->env__memory,(U64)si0+12U);
si1=2U;
si0&=si1;
si0=!(si0);
}else{
si0=0U;
}
L2:;
goto L0;
L1:;
UNREACHABLE;
L0:;
return si0;
}

U32 f15(cartInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=7060U;
si0=i32_load(i->env__memory,(U64)si0);
si1=l0;
si2=2U;
si1>>=(si2&31);
si0+=si1;
si0=i32_load8_u(i->env__memory,(U64)si0);
si1=l0;
si2=1U;
si1<<=(si2&31);
si2=6U;
si1&=si2;
si0>>=(si1&31);
si1=3U;
si0&=si1;
L0:;
return si0;
}

void f12(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=-64U;
si0+=si1;
l1=si0;
i->g0=si0;
si0=l1;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+52U,sj1);
si0=l1;
si1=0U;
i32_store(i->env__memory,(U64)si0+44U,si1);
si0=l1;
sj1=W2C2_LL(0U);
i64_store(i->env__memory,(U64)si0+36U,sj1);
si0=l1;
sj1=W2C2_LL(7U);
i64_store(i->env__memory,(U64)si0+28U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l9=si0;
si0=7076U;
si1=l1;
si2=24U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=l9;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=l1;
si1=l1;
si2=20U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+48U,si1);
si0=l1;
si1=32U;
si0+=si1;
l10=si0;
si0=l1;
si1=36U;
si0+=si1;
l11=si0;
si0=l1;
si1=40U;
si0+=si1;
l12=si0;
si0=l1;
si1=44U;
si0+=si1;
l13=si0;
si0=l1;
si1=52U;
si0+=si1;
l14=si0;
si0=l1;
si1=56U;
si0+=si1;
l15=si0;
L2:;
{
si0=l4;
si1=4U;
si0=si0 != si1;
if(si0){
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+8U);
l16=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+12U);
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l11;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+8U);
l2=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+12U);
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l4;
si2=12U;
si1*=si2;
l17=si1;
si0+=si1;
l2=si0;
si0=i32_load(i->env__memory,(U64)si0+4U);
l5=si0;
si0=l12;
si1=l2;
si1=i32_load(i->env__memory,(U64)si1);
l2=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=4U;
si0-=si1;
l6=si0;
si0=l5;
si1=1U;
si0-=si1;
l3=si0;
si0=0U;
l7=si0;
si0=7072U;
l2=si0;
si0=0U;
l8=si0;
L4:;
{
si0=l13;
si1=l2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l3;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0+20U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
si3=20U;
si2+=si3;
si3=l7;
si4=l8;
si5=4U;
f9(i,si0,si1,si2,si3,si4,si5);
si0=l14;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1+8U);
l2=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=1U;
si0-=si1;
l3=si0;
si0=l6;
si1=4U;
si0-=si1;
l6=si0;
si0=l1;
si0=i32_load(i->env__memory,(U64)si0+16U);
l8=si0;
si0=l1;
si0=i32_load(i->env__memory,(U64)si0+12U);
l7=si0;
goto L4;
L5:;
}
si0=l15;
si1=l2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l16;
si1=l17;
si0+=si1;
l3=si0;
si1=l8;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l3;
si1=l7;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l3;
si1=l2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
goto L2;
}
L3:;
}
si0=7076U;
si1=l9;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=-64U;
si0-=si1;
i->g0=si0;
goto L0;
L1:;
UNREACHABLE;
L0:;
}

void f28(cartInstance*i) {
U32 l0=0;
U32 l1=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=7052U;
si1=9136U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=0U;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l1;
sj1=W2C2_LL(2U);
i64_store(i->env__memory,(U64)si0+4U,sj1);
si0=7076U;
si0=i32_load(i->env__memory,(U64)si0);
l0=si0;
si0=7076U;
si1=l1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=l0;
i32_store(i->env__memory,(U64)si0,si1);
si0=7056U;
si1=(*i->env__memory).pages;
si2=16U;
si1<<=(si2&31);
i32_store(i->env__memory,(U64)si0,si1);
f18(i);
si0=7076U;
si1=l0;
i32_store(i->env__memory,(U64)si0,si1);
si0=l1;
si1=7060U;
si1=i32_load(i->env__memory,(U64)si1);
l0=si1;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l1;
si1=l0;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l0;
si1=7056U;
si1=i32_load(i->env__memory,(U64)si1);
si2=l0;
si1-=si2;
si0=f49(i,si0,si1);
si0=(*i->env__memory).pages;
l0=si0;
si0=7074U;
si1=1U;
i32_store8(i->env__memory,(U64)si0,si1);
si0=7056U;
si1=l0;
si2=16U;
si1<<=(si2&31);
i32_store(i->env__memory,(U64)si0,si1);
f29(i);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f39(cartInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->env__memory,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(i->env__memory,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
si0=l0;
si0=i32_load8_u(i->env__memory,(U64)si0+12U);
si1=1U;
si0&=si1;
si0=!(si0);
}else{
si0=0U;
}
L2:;
goto L0;
L1:;
UNREACHABLE;
L0:;
return si0;
}

wasmFuncExport cartFuncExports[13] = {
{(wasmFunc)f22,"malloc"},
{(wasmFunc)f23,"free"},
{(wasmFunc)f24,"calloc"},
{(wasmFunc)f25,"realloc"},
{(wasmFunc)f26,"posix_memalign"},
{(wasmFunc)f25,"aligned_alloc"},
{(wasmFunc)f27,"malloc_usable_size"},
{(wasmFunc)f28,"_start"},
{(wasmFunc)f30,"resume"},
{(wasmFunc)f31,"go_scheduler"},
{(wasmFunc)f33,"start"},
{(wasmFunc)f34,"update"},
{NULL,NULL}
};

static void cartInitTables(cartInstance* i) {
wasmTableAllocate(&i->t0, 1, 1);
}

static void cartInitGlobals(cartInstance* i) {
i->g0=9136U;
}

static void cartInitImports(cartInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
}

U32 cart_malloc(cartInstance*i,U32 l0){
return f22(i,l0);
}

void cart_free(cartInstance*i,U32 l0){
f23(i,l0);
}

U32 cart_calloc(cartInstance*i,U32 l0,U32 l1){
return f24(i,l0,l1);
}

U32 cart_realloc(cartInstance*i,U32 l0,U32 l1){
return f25(i,l0,l1);
}

U32 cart_posix_memalign(cartInstance*i,U32 l0,U32 l1,U32 l2){
return f26(i,l0,l1,l2);
}

U32 cart_aligned_alloc(cartInstance*i,U32 l0,U32 l1){
return f25(i,l0,l1);
}

U32 cart_malloc_usable_size(cartInstance*i,U32 l0){
return f27(i,l0);
}

void cart__start(cartInstance*i){
f28(i);
}

void cart_resume(cartInstance*i){
f30(i);
}

void cart_go_scheduler(cartInstance*i){
f31(i);
}

void cart_start(cartInstance*i){
f33(i);
}

void cart_update(cartInstance*i){
f34(i);
}

cartInstance* cartNewChild(cartInstance* self) {
cartInstance* child = (cartInstance*)calloc(1, sizeof(cartInstance));
child->common.funcExports = self->common.funcExports;
child->common.resolveImports = self->common.resolveImports;
child->common.newChild = self->common.newChild;
cartInitImports(child, self->common.resolveImports);
cartInitTables(child);
cartInitGlobals(child);
return child;
}

void cartInstantiate(cartInstance* i, void* resolveImports(const char* module, const char* name)) {
i->common.funcExports = cartFuncExports;
i->common.resolveImports = resolveImports;
i->common.newChild = (struct wasmModuleInstance* (*)(struct wasmModuleInstance*))cartNewChild;
cartInitImports(i, resolveImports);
cartInitTables(i);
cartInitGlobals(i);
}

void cartFreeInstance(cartInstance* i) {
wasmTableFree(&i->t0);
}

