#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

// Dynamic Array Definition
struct DynamicArray {
  int index;
  int length;
  int size;
};

// Changes the Size of the Dynamic Array
int change_size(struct DynamicArray array);

// Clear all Elements from the Dynamic Array
int clear_array(struct DynamicArray array);

// Create Dynamic Array
int create_array(struct DynamicArray array);

// Insert an Element into the Dynamic Array
// At an Index Position
// Shifts all Elements after it, to the Right
int insert_element(struct DynamicArray array, int index);

// Append an Element to the End of the Dynamic Array
int push_element(struct DynamicArray array);

// Remove an Element from of the Dynamic Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
int remove_element(struct DynamicArray array, int index);

#endif

