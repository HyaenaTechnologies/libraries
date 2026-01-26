#ifndef INTEGER_ARRAY_H
#define INTEGER_ARRAY_H

#include <stdint.h>

// Return the Length of the Dynamic Integer Array
int8_t array_length(int8_t *array[]);

// Clear all Elements from the Dynamic Integer Array
// Assigns the Value of all Elements to NULL
// Returns the Array
int8_t clear_array(int8_t *array[]);

// Create Dynamic Integer Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
int8_t create_array(int8_t *array[], int8_t capacity);

// Insert an Element into the Dynamic Integer Array
// At an Index Position
// Shifts all Elements after it, to the Right
// Returns the Array
// Returns NULL if Memory Allocation Failed
int8_t insert_element(int8_t *array[], int8_t element, int8_t index);

// Append an Element to the End of the Dynamic Integer Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
int8_t push_element(int8_t *array[], int8_t element);

// Remove an Element from of the Dynamic Integer Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
// Returns NULL if Memory Allocation Failed
int8_t remove_element(int8_t *array[], int8_t index);

#endif
