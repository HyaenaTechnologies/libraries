#include "number_token.h"

// Number Tokens
const NumberToken ZERO = '0';
const NumberToken ONE = '1';
const NumberToken TWO = '2';
const NumberToken THREE = '3';
const NumberToken FOUR = '4';
const NumberToken FIVE = '5';
const NumberToken SIX = '6';
const NumberToken SEVEN = '7';
const NumberToken EIGHT = '8';
const NumberToken NINE = '9';

// Number Token Vector
const NumberToken numbers_vector()  {
    const NumberToken numbers[10] = {
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
