# Makefile

# C Compiler Flags
CFLAGS = -Wall -Wextra

# C Compiler Memory Safety Analysis Flags
ANALYSISFLAGS = -Wall -Wextra -fsanitize=memory

# Build All
all: build

# Build Package
build:
	cd ./build
	clang++ $(CFLAGS) -c ../src/*.cc -include ../src/*.hh
	ar -rv ./tokens.a ./*.o
	ar -rv ./tokens.so ./*.o

# Check Package
check:
	cd ./build
	clang++ $(ANALYSISFLAGS) -c ../src/*.cc -include ../src/*.hh
	ar -rv ./tokens.a ./*.o
	ar -rv ./tokens.so ./*.o

# Format Package
format:
	clang-format -i ./src/*.cc ./src/*.hh

# Clean Package
clean:
	rm ./build/**

