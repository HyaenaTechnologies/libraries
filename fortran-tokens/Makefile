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
	ar -rcs tokens.a ./*.o
	ar -rcs tokens.so ./*.o

# Check Package
check: ./src/*.f90
	cd ./build
	gfortran $(ANALYSIS_FLAGS) ../src/*.f90
	ar -rcs tokens.a ./*.o
	ar -rcs tokens.so ./*.o

