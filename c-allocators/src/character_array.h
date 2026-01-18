#ifndef INTEGER_ARRAY_H
#define INTEGER_ARRAY_H

// Dynamic Character Array Definition
struct CharacterArray {
  int capacity;
  int index;
  int length;
  char *array[];
};

// Clear all Elements from the Dynamic Character Array
// Assigns the Value of all Elements to NULL
// Returns the Array
char clear_array(struct CharacterArray initial_array);

// Create Dynamic Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
char create_array(struct CharacterArray initial_array);

// Insert an Element into the Dynamic Character Array
// At an Index Position
// Shifts all Elements after it, to the Right
// Returns the Array
// Returns NULL if Memory Allocation Failed
char insert_element(struct CharacterArray initial_array, int element, int index);

// Append an Element to the End of the Dynamic Character Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
char push_element(struct CharacterArray initial_array, int element);

// Remove an Element from of the Dynamic Character Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
// Returns NULL if Memory Allocation Failed
char remove_element(struct CharacterArray initial_array, int index);

#endif

