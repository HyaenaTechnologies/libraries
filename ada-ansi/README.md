[Ada Language]: https://ada-lang.io/docs/arm
[GNU Compiler Collection]: https://gcc.gnu.org/onlinedocs/
[GCC Debugger]: https://www.sourceware.org/gdb/documentation/

# ANSI Codes

ANSI Codes and Escape Sequences

## Features

- Codes
- Escape Sequences

## Build

- [Ada][Ada Language]
- [GCC][GNU Compiler Collection]
- [GDB][GCC Debugger]

### Ada Alire Package Manager

```shell
alr build

alr test

alr run

alr clean
```

## GNU Ada Compiler

```shell
## Compile
cd ./build

gnat compile ../src/*.adb ../src/*.ads

ar -crs ansi.a ./*.o

ar -crs ansi.so ./*.o

## Analyze
--analyze: Run the static analyzer
-Wall: All Warnings
-Wextra: Extra Warnings
-fsanitize=address: AddressSanitizer, a memory error detector.
-fsanitize=thread: ThreadSanitizer, a data race detector.
-fsanitize=memory: MemorySanitizer, a detector of uninitialized reads. Requires instrumentation of all program code.
-fsanitize=undefined: UndefinedBehaviorSanitizer, a fast and compatible undefined behavior checker.
-fsanitize=type: TypeSanitizer, a detector for strict aliasing violations.
-fsanitize=dataflow: DataFlowSanitizer, a general data flow analysis.
-fsanitize=cfi: control flow integrity checks. Requires -flto.
-fsanitize=kcfi: kernel indirect call forward-edge control flow integrity.
-fsanitize=safe-stack: safe stack protection against stack-based memory corruption errors.
-fsanitize=realtime: RealtimeSanitizer, a real-time safety checker.
```

