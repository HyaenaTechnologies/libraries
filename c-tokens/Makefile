# C Compiler Flags
CFLAGS = -Wall -Wextra

# C Compiler Analysis Flags
ANALYSIS_FLAGS = -Wall -Wextra -fsanitize=memory

# Build All
all: build

# Compile Package
build: ./src/*.c
	cd ./build
	clang $(CFLAGS) ../src/*.c
	ar -rcs tokens.a ./*.o
	ar -rcs tokens.so ./*.o

# Check Package
check: ./src/*.c
	cd ./build
	clang $(ANALYSIS_FLAGS) ../src/*.c
	ar -rcs tokens.a ./*.o
	ar -rcs tokens.so ./*.o

# Format Package
format: ./src/*.c ./src/*.h
	clang-format -i ./src/*.c ./src/*.h

