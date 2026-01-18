#include "./unsigned_integer_array.h"

#include <stdio.h>
#include <stdlib.h>

// Clear all Elements from the Dynamic Unsigned Integer Array
// Assigns the Value of all Elements to NULL
// Returns the Array
unsigned int clear_array(struct UnsignedIntegerArray initial_array) {
  unsigned int **array = initial_array.array;
  int index = initial_array.index;
  int length = initial_array.length;

  for (index = 0; index < length; index = index + 1) {
    array[index] = NULL;
  }

  return **array;
}

// Create Dynamic Unsigned Integer Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
unsigned int create_array(struct UnsignedIntegerArray initial_array) {
  unsigned int **array = initial_array.array;
  int capacity = initial_array.capacity;

  if (capacity == 0) {
    capacity = 4;
    array = malloc(sizeof(int[capacity]));
    
    if (array == NULL) {    
      printf(stderr, "Memory Allocation Error\n");
      return **array;
    }
  } else if (capacity != 0) {
    array = malloc(sizeof(int[capacity]));

    if (array == NULL) {    
      printf(stderr, "Memory Allocation Error\n");
      return **array;
    }
  }

  return **array;
}

// Insert an Element into the Dynamic Unsigned Integer Array
// At an Index Position
// Shifts all Elements after it, to the Right
// Returns the Array
// Returns NULL if Memory Allocation Failed
unsigned int insert_element(struct UnsignedIntegerArray initial_array, int element, int index) {
  int address = initial_array.index;
  unsigned int **array = initial_array.array;
  int capacity = initial_array.capacity;
  int length = initial_array.length;

  for (address = index; address < length; address = address + 1) {
    array[address] = array[address - 1];
  }

  *array[index] = element;
  length = length + 1;
  capacity = length;
  array = realloc(array,sizeof(int[capacity]));

  if (array == NULL) {    
      printf(stderr, "Memory Allocation Error\n");
      return **array;
  }

  return **array;
 }

// Append an Element to the End of the Dynamic Unsigned Integer Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
unsigned int push_element(struct UnsignedIntegerArray initial_array, int element) {
  unsigned int **array = initial_array.array;
  int capacity = initial_array.capacity;
  int index = initial_array.index;
  int length = initial_array.length;

  length = length + 1;
  capacity = length;
  index = length - 1;
  array = realloc(array,sizeof(int[capacity]));
  *array[index] = element;

  if (array == NULL) {    
      printf(stderr, "Memory Allocation Error\n");
      return **array;
  }

  return **array;
}

// Remove an Element from of the Dynamic Unsigned Integer Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
// Returns NULL if Memory Allocation Failed
unsigned int remove_element(struct UnsignedIntegerArray initial_array, int index) {
  int address = initial_array.index;
  unsigned int **array = initial_array.array;
  int capacity = initial_array.capacity;
  unsigned int *element = array[index];
  int length = initial_array.length;

  for (address = index; address < length; address = address + 1) {
    array[address] = array[address + 1];
  }

  length = length - 1;
  capacity = length;
  array = realloc(array,sizeof(int[capacity]));

  if (array == NULL) {    
      printf(stderr, "Memory Allocation Error\n");
      return **array;
  }

   return *element;
}

