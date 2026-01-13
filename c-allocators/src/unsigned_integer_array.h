#ifndef UNSIGNED_INTEGER_ARRAY_H
#define UNSIGNED_INTEGER_ARRAY_H

// Dynamic Unsigned Integer Array Definition
struct UnsignedIntegerArray {
  int capacity;
  int index;
  int length;
  unsigned int *array[];
};

// Clear all Elements from the Dynamic Unsigned Integer Array
// Assigns the Value of all Elements to NULL
// Returns the Array
int clear_array(struct UnsignedIntegerArray initial_array);

// Create Dynamic Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
int create_array(struct UnsignedIntegerArray initial_array);

// Insert an Element into the Dynamic Unsigned Integer Array
// At an Index Position
// Shifts all Elements after it, to the Right
// Returns the Array
// Returns NULL if Memory Allocation Failed
int insert_element(struct UnsignedIntegerArray initial_array, int element, int index);

// Append an Element to the End of the Dynamic Unsigned Integer Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
int push_element(struct UnsignedIntegerArray initial_array, int element);

// Remove an Element from of the Dynamic Unsigned Integer Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
// Returns NULL if Memory Allocation Failed
int remove_element(struct UnsignedIntegerArray initial_array, int index);

#endif

