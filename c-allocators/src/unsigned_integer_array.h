#ifndef UNSIGNED_INTEGER_ARRAY_H
#define UNSIGNED_INTEGER_ARRAY_H

// Dynamic Unsigned Integer Array Definition
struct UnsignedIntegerArray {
  int capacity;
  int index;
  int length;
  unsigned int *array[];
};

// Changes the Size of the Dynamic Unsigned Integer Array
int change_size(struct UnsignedIntegerArray array);

// Clear all Elements from the Dynamic Unsigned Integer Array
int clear_array(struct UnsignedIntegerArray array);

// Create Dynamic Array
int create_array(struct UnsignedIntegerArray array);

// Insert an Element into the Dynamic Unsigned Integer Array
// At an Index Position
// Shifts all Elements after it, to the Right
int insert_element(struct UnsignedIntegerArray array, int index);

// Append an Element to the End of the Dynamic Unsigned Integer Array
int push_element(struct UnsignedIntegerArray array);

// Remove an Element from of the Dynamic Unsigned Integer Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
int remove_element(struct UnsignedIntegerArray array, int index);

#endif

