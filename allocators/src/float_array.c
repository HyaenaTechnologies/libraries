#include "./float_array.h"

#include <stdio.h>
#include <stdlib.h>

// Return the Length of the Dynamic Float Array
int array_length(float *array[]) {
  int index = 0;

  while (array[index] != NULL) {
    index = index + 1;
  }

  return index;
}

// Clear all Elements from the Dynamic Float Array
// Assigns the Value of all Elements to NULL
// Returns the Array
float clear_array(float *array[]) {
  int index;
  int length = array_length(array);

  for (index = 0; index < length; index = index + 1) {
    array[index] = NULL;
  }

  return **array;
}

// Create Dynamic Float Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
float create_array(float *array[], int capacity) {
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
float insert_element(float *array[], int element, int index) {
  int address;
  int length = array_length(array);

  array = realloc(array, sizeof(int[length + 1]));

  if (array == NULL) {
    printf(stderr, "Memory Allocation Error\n");
    return **array;
  }

  for (address = index; address < length; address = address + 1) {
    array[address] = array[address - 1];
  }

  *array[index] = element;

  return **array;
}

// Append an Element to the End of the Dynamic Float Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
float push_element(float *array[], int element) {
  int length = array_length(array);

  array = realloc(array, sizeof(int[length + 1]));

  if (array == NULL) {
    printf(stderr, "Memory Allocation Error\n");
    return **array;
  }

  *array[length + 1] = element;

  return **array;
}

// Remove an Element from of the Dynamic Float Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
// Returns NULL if Memory Allocation Failed
float remove_element(float *array[], int index) {
  int address;
  float *element = array[index];
  int length = array_length(array);

  for (address = index; address < length; address = address + 1) {
    array[address] = array[address + 1];
  }

  array = realloc(array, sizeof(int[length - 1]));

  if (array == NULL) {
    printf(stderr, "Memory Allocation Error\n");
    return **array;
  }

  return *element;
}
