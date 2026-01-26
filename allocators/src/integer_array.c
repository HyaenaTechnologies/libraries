#include "./integer_array.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Return the Length of the Dynamic Integer Array
int8_t array_length(int8_t *array[]) {
  int index = 0;

  while (array[index] != NULL) {
    index = index + 1;
  }

  return index;
}

// Clear all Elements from the Dynamic Integer Array
// Assigns the Value of all Elements to NULL
// Returns the Array
int8_t clear_array(int8_t *array[]) {
  int index;
  int8_t length = array_length(array);

  for (index = 0; index < length; index = index + 1) {
    array[index] = NULL;
  }

  return **array;
}

// Create Dynamic Integer Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
int8_t create_array(int8_t *array[], int8_t capacity) {
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

// Insert an Element into the Dynamic Integer Array
// At an Index Position
// Shifts all Elements after it, to the Right
// Returns the Array
// Returns NULL if Memory Allocation Failed
int8_t insert_element(int8_t *array[], int8_t element, int index) {
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

// Append an Element to the End of the Dynamic Integer Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
int8_t push_element(int8_t *array[], int8_t element) {
  int8_t length = array_length(array);

  array = realloc(array, sizeof(int8_t[length + 1]));

  if (array == NULL) {
    printf(stderr, "Memory Allocation Error\n");
    return **array;
  }

  *array[length + 1] = element;

  return **array;
}

// Remove an Element from of the Dynamic Integer Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
// Returns NULL if Memory Allocation Failed
int8_t remove_element(int8_t *array[], int index) {
  int8_t address;
  int8_t *element = array[index];
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
