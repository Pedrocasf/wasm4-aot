# wasm4-aot

Ahead-of-time-compiled [WASM-4](https://wasm4.org/) fantasy console runtime port, designed with homebrew/embedded platforms in mind.

## How does it work?

The official WASM-4 repository comes with two runtimes:

  * native - using a fast runtime WebAssembly implementation, a choice of the [wasm3](https://github.com/wasm3/wasm3) interpreter or [Wasmer](https://github.com/wasmerio/wasmer),
  * web - using the browser's built-in WebAsssembly JIT.

This repository provides an alternate approach: using either [w2c2](https://github.com/turbolent/w2c2) or [wasm2c](https://github.com/WebAssembly/wabt/tree/main/wasm2c)
to transpile the provided WebAssembly file to C, then statically link it with a slimmed-down WebAssembly runtime. This comes with some trade-offs - you need to
pre-compile the WASM file, but it allows for using compilers to do state-of-the-art link-time optimization. This is particularly useful for porting WebAssembly
software (like WASM-4 games) to low-end platforms, like microcontrollers or "retro" handhelds.

## Building

    $ ./build.sh file.wasm [platform] [output_file]

Supported platforms:

  * gba
  * nds
  * 3ds
  * psp

Troubleshooting:

  * `w2c2: unsupported opcode unknown` - use the wasm2c frontend instead:
    * Install wabt (**1.0.30 only**), add to PATH
    * Run `./build.sh -f wasm2c file.wasm ...`

## Building in a local docker container
  To build for `gba`, `nds`, and `3ds` platforms with docker:

    $ docker build -t wasm4-aot-image .
    $ docker run -v $PWD:/pwd_dir --rm wasm4-aot-image ./build.sh -f wasm2c /pwd_dir/cart.wasm [platform] /pwd_dir/[output_file]

  Other platforms: TBD

## License

The engine as a whole is licensed under the terms of the MIT license. The individual copyright notices are provided alongside this README file.

Note that if using the wasm2c frontend instead of the w2c2 frontend, additional code is linked in which is licensed under the terms of Apache License 2.0.

Note that homebrew toolchains statically link libraries of their own, which may be under distinct terms from the ones provided on the engine.


## Addendum 
For this to work, after generating the cart.c you need to put cartInitMemories(i, NULL); as the last line of teh void cartInstantiate method.