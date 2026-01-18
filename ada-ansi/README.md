[Ada Language]: https://ada-lang.io/docs/arm
[GNU Compiler Collection]: https://gcc.gnu.org/onlinedocs/
[GCC Debugger]: https://www.sourceware.org/gdb/documentation/
[GNU Make]: https://www.gnu.org/software/make/manual/html_node/index.html

# ANSI Codes

ANSI Codes and Escape Sequences

## Features

- Codes
- Escape Sequences

## Build

- [Ada][Ada Language]
- [GCC][GNU Compiler Collection]
- [GDB][GCC Debugger]
- [Make][GNU Make]

### Ada Alire Package Manager

```shell
alr build

alr test

alr run

alr clean
```

### GNU Make

```shell
make build

make clean

make check
```

## GNU Ada Compiler

```shell
## Compile
cd ./build

gnat make ../src/*.adb ../src/*.ads

ar -crs ansi.a ./*.o

ar -crs ansi.so ./*.o

## Analyze
-fanalyzer
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

