#include "number_token.h"

// Number Tokens
const char ZERO = '0';
const char ONE = '1';
const char TWO = '2';
const char THREE = '3';
const char FOUR = '4';
const char FIVE = '5';
const char SIX = '6';
const char SEVEN = '7';
const char EIGHT = '8';
const char NINE = '9';

// Number Token Array
const char numbers_array()  {
    const char numbers[10] = {
        ZERO,
        ONE,
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
    };

    return *numbers;
}
