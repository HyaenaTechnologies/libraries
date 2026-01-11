#ifndef INTEGER_ARRAY_H
#define INTEGER_ARRAY_H

// Dynamic Integer Array Definition
struct IntegerArray {
  int capacity;
  int index;
  int length;
  int *array[];
};

// Clear all Elements from the Dynamic Integer Array
// Assigns the Value of all Elements to NULL
int clear_array(struct IntegerArray initial_array);

// Create Dynamic Array
int create_array(struct IntegerArray initial_array);

// Insert an Element into the Dynamic Integer Array
// At an Index Position
// Shifts all Elements after it, to the Right
int insert_element(struct IntegerArray initial_array, int element, int index);

// Append an Element to the End of the Dynamic Integer Array
int push_element(struct IntegerArray initial_array, int element);

// Remove an Element from of the Dynamic Integer Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
int remove_element(struct IntegerArray initial_array, int index);

#endif

