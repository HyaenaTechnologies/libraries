#include "./float_array.h"

#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Return the Length of the Dynamic Float Array
int8_t array_length(float_t *array[]) {
  int8_t index = 0;

  while (array[index] != NULL) {
    index = index + 1;
  }

  return index;
}

// Clear all Elements from the Dynamic Float Array
// Assigns the Value of all Elements to NULL
// Returns the Array
float_t clear_array(float_t *array[]) {
  int8_t index;
  int8_t length = array_length(array);

  for (index = 0; index < length; index = index + 1) {
    array[index] = NULL;
  }

  return **array;
}

// Create Dynamic Float Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
float_t create_array(float_t *array[], int8_t capacity) {
  if (capacity == 0) {
    capacity = 4;
    array = malloc(sizeof(int8_t[capacity]));

    if (array == NULL) {
      printf(stderr, "Memory Allocation Error\n");
      return **array;
    }
  } else if (capacity != 0) {
    array = malloc(sizeof(int8_t[capacity]));

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
float_t insert_element(float_t *array[], float_t element, int8_t index) {
  int8_t address;
  int8_t length = array_length(array);

  array = realloc(array, sizeof(int8_t[length + 1]));

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
float_t push_element(float_t *array[], float_t element) {
  int8_t length = array_length(array);

  array = realloc(array, sizeof(int8_t[length + 1]));

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
float_t remove_element(float_t *array[], int8_t index) {
  int8_t address;
  float_t *element = array[index];
  int8_t length = array_length(array);

  for (address = index; address < length; address = address + 1) {
    array[address] = array[address + 1];
  }

  array = realloc(array, sizeof(int8_t[length - 1]));

  if (array == NULL) {
    printf(stderr, "Memory Allocation Error\n");
    return **array;
  }

  return *element;
}
