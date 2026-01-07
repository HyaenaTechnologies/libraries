[C Language]: https://www.c-language.org/
[Clang Compiler]: https://clang.llvm.org/docs/index.html
[GNU Compiler Collection]: https://gcc.gnu.org/onlinedocs/
[GCC Debugger]: https://www.sourceware.org/gdb/documentation/
[GNU Make]: https://www.gnu.org/software/make/manual/html_node/index.html
[LLVM IR]: https://llvm.org/docs/
[Low Level Debugger]: https://lldb.llvm.org/
[Low Level Linker]: https://lld.llvm.org/

# ANSI Codes

ANSI Codes and Escape Sequences

## Features

- Codes
- Escape Sequences

## Build

- [C][C Language]
- [LLVM][LLVM IR]
- [Clang][Clang Compiler]
- [LLDB][Low Level Debugger]
- [LLD][Low Level Linker]
- [GCC][GNU Compiler Collection]
- [GDB][GCC Debugger]
- [Make][GNU Make]

### GNU Make

```shell
make build

make format
```

## Clang

```shell
## Compile
cd ./build

clang ../src/*.c

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

## GNU Compiler Collection 

```shell
## Compile
cd ./build

gcc ../src/*.c

ar -crs ansi.a ./*.o

ar -crs ansi.so ./*.o

## Analyze
-Wall: All Warnings
-Wextra: Extra Warnings
-Wanalyzer-allocation-size
-Wanalyzer-deref-before-check
-Wanalyzer-double-fclose
-Wanalyzer-double-free
-Wanalyzer-exposure-through-output-file
-Wanalyzer-exposure-through-uninit-copy
-Wanalyzer-fd-access-mode-mismatch
-Wanalyzer-fd-double-close
-Wanalyzer-fd-leak
-Wanalyzer-fd-phase-mismatch
-Wanalyzer-fd-type-mismatch
-Wanalyzer-fd-use-after-close
-Wanalyzer-fd-use-without-check
-Wanalyzer-file-leak
-Wanalyzer-free-of-non-heap
-Wanalyzer-imprecise-fp-arithmetic
-Wanalyzer-infinite-loop
-Wanalyzer-infinite-recursion
-Wanalyzer-jump-through-null
-Wanalyzer-malloc-leak
-Wanalyzer-mismatching-deallocation
-Wanalyzer-null-argument
-Wanalyzer-null-dereference
-Wanalyzer-out-of-bounds
-Wanalyzer-overlapping-buffers
-Wanalyzer-possible-null-argument
-Wanalyzer-possible-null-dereference
-Wanalyzer-putenv-of-auto-var
-Wanalyzer-shift-count-negative
-Wanalyzer-shift-count-overflow
-Wanalyzer-stale-setjmp-buffer
-Wanalyzer-tainted-allocation-size
-Wanalyzer-tainted-array-index
-Wanalyzer-tainted-assertion
-Wanalyzer-tainted-divisor
-Wanalyzer-tainted-offset
-Wanalyzer-tainted-size
-Wanalyzer-undefined-behavior-ptrdiff
-Wanalyzer-undefined-behavior-strtok
-Wanalyzer-unsafe-call-within-signal-handler
-Wanalyzer-use-after-free
-Wanalyzer-use-of-pointer-in-stale-stack-frame
-Wanalyzer-use-of-uninitialized-value
-Wanalyzer-va-arg-type-mismatch
-Wanalyzer-va-list-exhausted
-Wanalyzer-va-list-leak
-Wanalyzer-va-list-use-after-va-end
-Wanalyzer-write-to-const
-Wanalyzer-write-to-string-literal
```

