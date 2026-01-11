#include "./integer_array.h"

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

// Changes the Size of the Dynamic Integer Array
int change_size(struct IntegerArray initial_array) {
  int **array = initial_array.array;
  int capacity = initial_array.capacity;
  int index = initial_array.index;
  int length = initial_array.length;

  array = malloc(sizeof(int[capacity]));

  if (array == NULL) {    
    printf("Error Allocating Memory\n");
  } else if (capacity == 0) {
    capacity = 64;
  }

  
  return 0;
}

// Clear all Elements from the Dynamic Integer Array
int clear_array(struct IntegerArray initial_array) {


  return 0;
}

// Create Dynamic Integer Array
int create_array(struct IntegerArray initial_array) {


  return 0;
}

// Insert an Element into the Dynamic Integer Array
// At an Index Position
// Shifts all Elements after it, to the Right
int insert_element(struct IntegerArray initial_array, int index) {


  return 0;
}

// Append an Element to the End of the Dynamic Integer Array
int push_element(struct IntegerArray initial_array) {


  return 0;
}

// Remove an Element from of the Dynamic Integer Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
int remove_element(struct IntegerArray initial_array, int index) {


  return 0;
}

