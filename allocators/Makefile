# Build All
all: build

# Compile Package
build: ./src/*.c
	cd ./build
	clang ../src/*.c
	ar -rcs allocators.a ./*.o
	ar -rcs allocators.so ./*.o

# Format Package
format: ./src/*.c ./src/*.h
	clang-format -i ./src/*.c ./src/*.h

# Test Package
test: ./tests/*.c ./test/*.h

