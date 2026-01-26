#ifndef FLOAT_ARRAY_H
#define FLOAT_ARRAY_H

// Return the Length of the Dynamic Float Array
int array_length(float *array[]);

// Clear all Elements from the Dynamic Float Array
// Assigns the Value of all Elements to NULL
// Returns the Array
float clear_array(float *array[]);

// Create Dynamic Float Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
float create_array(float *array[], int capacity);

// Insert an Element into the Dynamic Float Array
// At an Index Position
// Shifts all Elements after it, to the Right
// Returns the Array
// Returns NULL if Memory Allocation Failed
float insert_element(float *array[], int element, int index);

// Append an Element to the End of the Dynamic Float Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
float push_element(float *array[], int element);

// Remove an Element from of the Dynamic Float Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
// Returns NULL if Memory Allocation Failed
float remove_element(float *array[], int index);

#endif
