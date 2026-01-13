#include "./float_array.h"

#include <stdio.h>
#include <stdlib.h>

// Clear all Elements from the Dynamic Float Array
// Assigns the Value of all Elements to NULL
// Returns the Array
int clear_array(struct FloatArray initial_array) {
  float **array = initial_array.array;
  int index = initial_array.index;
  int length = initial_array.length;

  for (index = 0; index < length; index = index + 1) {
    array[index] = NULL;
  }

  return **array;
}

// Create Dynamic Float Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
int create_array(struct FloatArray initial_array) {
  float **array = initial_array.array;
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

// Insert an Element into the Dynamic Float Array
// At an Index Position
// Shifts all Elements after it, to the Right
// Returns the Array
// Returns NULL if Memory Allocation Failed
int insert_element(struct FloatArray initial_array, int element, int index) {
  int address = initial_array.index;
  float **array = initial_array.array;
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

// Append an Element to the End of the Dynamic Float Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
int push_element(struct FloatArray initial_array, int element) {
  float **array = initial_array.array;
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

// Remove an Element from of the Dynamic Float Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
// Returns NULL if Memory Allocation Failed
int remove_element(struct FloatArray initial_array, int index) {
  int address = initial_array.index;
  float **array = initial_array.array;
  int capacity = initial_array.capacity;
  float *element = array[index];
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

