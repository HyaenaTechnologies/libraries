# C Compiler Flags
CFLAGS = -Wall -Wextra

# C Compiler Analysis Flags
ANALYSIS_FLAGS = --analyze -Wall -Wextra

# Build All
all: build

# Compile Package
build: ./src/*.c
	cd ./build
	clang $(CFLAGS) ../src/*.c
	ar -rcs allocators.a ./*.o
	ar -rcs allocators.so ./*.o

# Check Package
check: ./src/*.c
	cd ./build
	clang $(ANALYSIS_FLAGS) ../src/*.c
	ar -rcs allocators.a ./*.o
	ar -rcs allocators.so ./*.o

# Clean Package
clean:
	cd ./build
	rm ./*

# Format Package
format: ./src/*.c ./src/*.h
	clang-format -i ./src/*.c ./src/*.h

# Test Package
test: ./tests/*.c ./test/*.h

