# wasm4-aot

Ahead-of-time-compiled [WASM-4](https://wasm4.org/) fantasy console runtime port, designed with homebrew/embedded platforms in mind.

## Building

    $ ./build.sh file.wasm platform [output_file]

Supported platforms:

  * gba
  * nds
  * 3ds
  * psp

Troubleshooting:

  * `w2c2: unsupported opcode unknown` - use the wasm2c frontend instead:
    * Install wabt (**1.0.30 only**), add to PATH
    * Run `./build.sh -f wasm2c file.wasm ...`

## License

The engine as a whole is licensed under the terms of the MIT license. The individual copyright notices are provided alongside this README file.

Note that if using the wasm2c frontend instead of the w2c2 frontend, additional code is linked in which is licensed under the terms of Apache License 2.0.

Note that homebrew toolchains statically link libraries of their own, which may be under distinct terms from the ones provided on the engine.
