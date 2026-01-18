# C Compiler Flags
CFLAGS = -Wall -Wextra

# C Compiler Analysis Flags
ANALYSIS_FLAGS = -Wall -Wextra -fanalyzer

# Build All
all: build

# Compile Package
build: ./src/*.f90
	cd ./build
	gfortran $(CFLAGS) ../src/*.f90
	ar -rcs allocators.a ./*.o
	ar -rcs allocators.so ./*.o

# Check Package
check: ./src/*.f90
	cd ./build
	gfortran $(ANALYSIS_FLAGS) ../src/*.f90
	ar -rcs alloators.a ./*.o
	ar -rcs alloators.so ./*.o

# Clean Package
clean:
	cd ./build
	rm ./*

# Test Package
test: ./tests/*.f90

