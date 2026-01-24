#ifndef INTEGER_ARRAY_H
#define INTEGER_ARRAY_H

// Return the Length of the Dynamic Integer Array
int array_length(int *array[]);

// Clear all Elements from the Dynamic Integer Array
// Assigns the Value of all Elements to NULL
// Returns the Array
int clear_array(int *array[]);

// Create Dynamic Integer Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
int create_array(int *array[], int capacity);

// Insert an Element into the Dynamic Integer Array
// At an Index Position
// Shifts all Elements after it, to the Right
// Returns the Array
// Returns NULL if Memory Allocation Failed
int insert_element(int *array[], int element, int index);

// Append an Element to the End of the Dynamic Integer Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
int push_element(int *array[], int element);

// Remove an Element from of the Dynamic Integer Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
// Returns NULL if Memory Allocation Failed
int remove_element(int *array[], int index);

#endif

