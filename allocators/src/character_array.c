#include "./character_array.h"

#include <stdio.h>
#include <stdlib.h>

// Return the Length of the Dynamic Character Array
int array_length(char *array[]) {
  int index = 0;

  while (*array[index] != '\0') {
    index = index + 1;
  }

  return index;
}

// Clear all Elements from the Dynamic Character Array
// Assigns the Value of all Elements to '\0'
// Returns the Array
char clear_array(char *array[]) {
  int index;
  int length = array_length(array);

  for (index = 0; index < length; index = index + 1) {
    *array[index] = '\0';
  }

  return **array;
}

// Create Dynamic Character Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
char create_array(char *array[], int capacity) {
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

// Insert an Element into the Dynamic Character Array
// At an Index Position
// Shifts all Elements after it, to the Right
// Returns the Array
// Returns NULL if Memory Allocation Failed
char insert_element(char *array[], int element, int index) {
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

// Append an Element to the End of the Dynamic Character Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
char push_element(char *array[], int element) {
  int length = array_length(array);

  array = realloc(array, sizeof(int[length + 1]));

  if (array == NULL) {
    printf(stderr, "Memory Allocation Error\n");
    return **array;
  }

  *array[length + 1] = element;

  return **array;
}

// Remove an Element from of the Dynamic Character Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
// Returns NULL if Memory Allocation Failed
char remove_element(char *array[], int index) {
  int address;
  char *element = array[index];
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
