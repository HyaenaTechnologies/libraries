#ifndef CHARACTER_ARRAY_H
#define CHARACTER_ARRAY_H

#include <stddef.h>

// Return the Length of the Dynamic Character Array
size_t array_length(char *array[]);

// Clear all Elements from the Dynamic Character Array
// Assigns the Value of all Elements to '\0'
// Returns the Array
char clear_array(char *array[]);

// Create Dynamic Character Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
char create_array(char *array[], size_t capacity);

// Insert an Element into the Dynamic Characterr Array
// At an Index Position
// Shifts all Elements after it, to the Right
// Returns the Array
// Returns NULL if Memory Allocation Failed
char insert_element(char *array[], char element, size_t index);

// Append an Element to the End of the Dynamic Character Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
char push_element(char *array[], char element);

// Remove an Element from of the Dynamic Character Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
// Returns NULL if Memory Allocation Failed
char remove_element(char *array[], size_t index);

#endif
