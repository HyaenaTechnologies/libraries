#ifndef UNSIGNED_INTEGER_ARRAY_H
#define UNSIGNED_INTEGER_ARRAY_H

#include <stdint.h>

// Return the Length of the Dynamic Unsigned Integer Array
int8_t array_length(uint8_t *array[]);

// Clear all Elements from the Dynamic Unsigned Integer Array
// Assigns the Value of all Elements to NULL
// Returns the Array
uint8_t clear_array(uint8_t *array[]);

// Create Dynamic Unsigned Integer Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
uint8_t create_array(uint8_t *array[], int8_t capacity);

// Insert an Element into the Dynamic Unsigned Integer Array
// At an Index Position
// Shifts all Elements after it, to the Right
// Returns the Array
// Returns NULL if Memory Allocation Failed
uint8_t insert_element(uint8_t *array[], int8_t element, int8_t index);

// Append an Element to the End of the Dynamic Unsigned Integer Array
// Returns the Array
// Returns NULL if Memory Allocation Failed
uint8_t push_element(uint8_t *array[], int8_t element);

// Remove an Element from of the Dynamic Unsigned Integer Array
// At an Index Position
// Returns the Element
// Shifts all Elements after it, to the Left
// Returns NULL if Memory Allocation Failed
uint8_t remove_element(uint8_t *array[], int8_t index);

#endif

