#include "./character_array.h"

#include <stdio.h>
#include <stdlib.h>

// Clear all Elements from the Dynamic Character Array
// Assigns the Value of all Elements to NULL
int clear_array(struct CharacterArray initial_array) {
  char **array = initial_array.array;
  int index = initial_array.index;
  int length = initial_array.length;

  for (index = 0; index < length; index = index + 1) {
    array[index] = NULL;
  }

  return 0;
}

// Create Dynamic Character Array
int create_array(struct CharacterArray initial_array) {
  char **array = initial_array.array;
  int capacity = initial_array.capacity;

  if (capacity == 0) {
    capacity = 4;
    array = malloc(sizeof(int[capacity]));
    
    if (array == NULL) {    
      printf(stderr, "Memory Allocation Error\n");
    } else {
      printf("Memory Allocated");
    }
  } else if (capacity != 0) {
    array = malloc(sizeof(int[capacity]));

    if (array == NULL) {    
      printf(stderr, "Memory Allocation Error\n");
    } else {
      printf("Memory Allocated");
    }
  }

  return 0;
}

// Insert an Element into the Dynamic Character Array
// At an Index Position
// Shifts all Elements after it, to the Right
int insert_element(struct CharacterArray initial_array, int element, int index) {
  int address = initial_array.index;
  char **array = initial_array.array;
  int length = initial_array.length;

  for (address = index; address < length; address = address + 1) {
    array[address] = array[address - 1];
  }

  *array[index] = element;
  length = length + 1;
  array = realloc(array,sizeof(int[length]));

  return 0;
 }

// Append an Element to the End of the Dynamic Character Array
int push_element(struct CharacterArray initial_array, int element) {
  char **array = initial_array.array;
  int index = initial_array.index;
  int length = initial_array.length;

  length = length + 1;
  array = realloc(array,sizeof(int[length]));
  index = length;
  *array[index] = element;

  return 0;
}

// Remove an Element from of the Dynamic Character Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
int remove_element(struct CharacterArray initial_array, int index) {
  int address = initial_array.index;
  char **array = initial_array.array;
  char *element = array[index];
  int length = initial_array.length;

  for (address = index; address < length; address = address + 1) {
    array[address] = array[address + 1];
  }

  length = length - 1;
  array = realloc(array,sizeof(int[length]));

  return *element;
}

