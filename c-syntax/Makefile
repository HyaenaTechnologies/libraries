# Build All
all: build

# Compile Package
build: ./src/*.c
	cd ./build
	clang ../src/*.c
	ar -rcs syntax.a ./*.o
	ar -rcs syntax.so ./*.o

# Format Package
format: ./src/*.c ./src/*.h
	clang-format -i ./src/*.c ./src/*.h

