#ifndef UNSIGNED_INTEGER_ARRAY_H
#define UNSIGNED_INTEGER_ARRAY_H

// Return the Length of the Dynamic Unsigned Integer Array
int array_length(unsigned int *array[]);

// Clear all Elements from the Dynamic Unsigned Integer Array
// Assigns the Value of all Elements to NULL
// Returns the Array
unsigned int clear_array(unsigned int *array[]);

// Create Dynamic Unsigned Integer Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
unsigned int create_array(unsigned int *array[], int capacity);

// Insert an Element into the Dynamic Unsigned Integer Array
// At an Index Position
// Shifts all Elements after it, to the Right
// Returns the Array
// Returns NULL if Memory Allocation Failed
unsigned int insert_element(unsigned int *array[], int element, int index);

// Append an Element to the End of the Dynamic Unsigned Integer Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
unsigned int push_element(unsigned int *array[], int element);

// Remove an Element from of the Dynamic Unsigned Integer Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
// Returns NULL if Memory Allocation Failed
unsigned int remove_element(unsigned int *array[], int index);

#endif

