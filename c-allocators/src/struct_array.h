#ifndef STRUCT_ARRAY_H
#define STRUCT_ARRAY_H

#include <stddef.h>

// Dynamic Struct Array Definition
struct StructArray {
  int capacity;
  int index;
  int length;
  size_t *array[];
};

// Changes the Size of the Dynamic Struct Array
int change_size(struct StructArray array);

// Clear all Elements from the Dynamic Struct Array
int clear_array(struct StructArray array);

// Create Dynamic Array
int create_array(struct StructArray array);

// Insert an Element into the Dynamic Struct Array
// At an Index Position
// Shifts all Elements after it, to the Right
int insert_element(struct StructArray array, int index);

// Append an Element to the End of the Dynamic Struct Array
int push_element(struct StructArray array);

// Remove an Element from of the Dynamic Struct Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
int remove_element(struct StructArray array, int index);

#endif

