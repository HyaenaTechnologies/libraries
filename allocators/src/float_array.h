#ifndef FLOAT_ARRAY_H
#define FLOAT_ARRAY_H

#include <math.h>
#include <stdint.h>

// Return the Length of the Dynamic Float Array
int8_t array_length(float_t *array[]);

// Clear all Elements from the Dynamic Float Array
// Assigns the Value of all Elements to NULL
// Returns the Array
float clear_array(float_t *array[]);

// Create Dynamic Float Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
float create_array(float_t *array[], int8_t capacity);

// Insert an Element into the Dynamic Float Array
// At an Index Position
// Shifts all Elements after it, to the Right
// Returns the Array
// Returns NULL if Memory Allocation Failed
float insert_element(float_t *array[], float_t element, int index);

// Append an Element to the End of the Dynamic Float Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
float push_element(float_t *array[], float_t element);

// Remove an Element from of the Dynamic Float Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
// Returns NULL if Memory Allocation Failed
float remove_element(float_t *array[], int index);

#endif
