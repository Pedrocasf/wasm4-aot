#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "platform_shim.h"
#include "runtime.h"
#include "wasm-cart.h"
#include "cart.h"
#include "util.h"
#ifdef BUILD_USE_W2C2
    static cartInstance instance; 
    extern wasmMemory (*env__memory);
#endif
#ifdef BUILD_USE_WASM2C
#include "cart.h"
#include "wasm-rt.h"
#include "wasm-rt-impl.h"
#include "wasm-rt-std.h"

static Z_cart_instance_t instance;

typedef struct {
} Z_env_instance_t;
static Z_env_instance_t env_instance;
extern wasm_rt_memory_t wasm_shim_memory;

wasm_rt_memory_t* Z_envZ_memory(struct Z_env_instance_t*) {
    return &wasm_shim_memory;
}
#endif
void* resolveImport(const char* moduleName, const char* importName) {
    if (strcmp(moduleName, "env") == 0 && strcmp(importName, "memory") == 0) {
        fprintf(stderr, "solved mem import\n");
        return env__memory;
    }
    return NULL;
}
int main(int argc, char **argv) {
    platform_init();

    w4_runtimeInit();

#ifdef BUILD_USE_WASM2C
    wasm_rt_init();

    Z_cart_init_module();
    Z_cart_instantiate(&instance, &env_instance);

    wasm_rt_trap_t code = wasm_rt_impl_try();
    if (code != 0) {
#ifdef DEBUG
        debug_printf("A trap occurred with code: %d\n", code);
        while(1);
#endif
    } else {
        Z_cartZ__start(&instance);
        Z_cartZ__initialize(&instance);
        Z_cartZ_start(&instance);

        while (platform_update()) {
            w4_runtimeUpdate();
            Z_cartZ_update(&instance);
            platform_draw();
        }
    }

    Z_cart_free(&instance);

    wasm_rt_free();
#endif

#ifdef BUILD_USE_W2C2  
    cartInstantiate(&instance, resolveImport);
    //instance.env__memory = env__memory;
    fprintf(stderr,"Instantiated cart\n");
    fprintf(stderr, "%x\n", instance.g0);
    //instance.env__memory = env__memory;// = wasmMemoryAllocate(1,1,false);
    
    cart__start(&instance);
    fprintf(stderr,"Started cart\n");   
    //init();

    //e_X5Fstart();
    //e_X5Finitialize();
    //e_start();

    while (platform_update()) {
        fprintf(stderr, "log\n");
        w4_runtimeUpdate();
        //e_update();
        cart_update(&instance);
        platform_draw();
    }
#endif

    platform_deinit();

    return 0;
}
