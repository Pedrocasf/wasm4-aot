# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Initialise pico_sdk from installed location
# (note this can come from environment, CMake cache etc)

# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(sdkVersion 2.1.1)
set(toolchainVersion 14_2_Rel1)
set(picotoolVersion 2.1.1)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()
# ====================================================================================
set(PICO_BOARD pico2 CACHE STRING "Board type")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(WASM4-aot C CXX ASM)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

# Add executable. Default name is the project name, version 0.1

add_executable(WASM4-aot
    cart/cart.c
    src/framebuffer.cpp
    src/main.c
    src/runtime.c
    src/util.c
    src/wasm-shim.c
    src/platform/pico2/platform.c
)


pico_set_program_name(WASM4-aot "WASM4-aot")
pico_set_program_version(WASM4-aot "0.1")

# Generate PIO header
#pico_generate_pio_header(SSD1351-HSTX ${CMAKE_CURRENT_LIST_DIR}/blink.pio)

# Modify the below lines to enable/disable output over UART/USB
#pico_enable_stdio_uart(WASM4-aot 1)
pico_enable_stdio_usb(WASM4-aot 1)

# Add the standard library to the build
target_link_libraries(WASM4-aot
        pico_multicore
        pico_stdlib
        pico_sync
        pico_malloc
)

# Add the standard include files to the build
target_include_directories(WASM4-aot PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        src/platform/pico2/
        src/config/
        src/
)

# Add any user requested libraries
target_link_libraries(WASM4-aot
#        hardware_spi
#        hardware_i2c
#        hardware_dma
#        hardware_pio
#        hardware_interp
#        hardware_timer
#        hardware_watchdog
#        hardware_clocks
        )

pico_add_extra_outputs(WASM4-aot)

