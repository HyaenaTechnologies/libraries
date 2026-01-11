#ifndef INTEGER_ARRAY_H
#define INTEGER_ARRAY_H

// Dynamic Character Array Definition
struct CharacterArray {
  int capacity;
  int index;
  int length;
  char *array[];
};

// Changes the Size of the Dynamic Character Array
int change_size(struct CharacterArray initial_array);

// Clear all Elements from the Dynamic Character Array
int clear_array(struct CharacterArray initial_array);

// Create Dynamic Array
int create_array(struct CharacterArray initial_array);

// Insert an Element into the Dynamic Character Array
// At an Index Position
// Shifts all Elements after it, to the Right
int insert_element(struct CharacterArray initial_array, int index);

// Append an Element to the End of the Dynamic Character Array
int push_element(struct CharacterArray initial_array);

// Remove an Element from of the Dynamic Character Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
int remove_element(struct CharacterArray initial_array, int index);

#endif

