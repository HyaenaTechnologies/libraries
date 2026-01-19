# C Compiler Flags
CFLAGS = -Wall -Wextra

# C Compiler Analysis Flags
ANALYSIS_FLAGS = -Wall -Wextra -fanalyzer

# Build All
all: build

# Compile Package
build: ./src/*.adb ./src/*.ads
	cd ./build
	gnat make $(CFLAGS) ../src/*.adb ../src/*.ads
	ar -rcs allocators.a ./*.o
	ar -rcs allocators.so ./*.o

# Check Package
check: ./src/*.adb ./src/*.ads
	cd ./build
	gnat make $(ANALYSIS_FLAGS) ../src/*.adb ../src/*.ads
	ar -rcs allocators.a ./*.o
	ar -rcs allocators.so ./*.o

# Clean Package
clean:
	rm ./build/*

# Test Package
test: ./tests/*.adb ./tests/*.ads

