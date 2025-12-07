#include "delimiter_token.h"

// Delimiter Tokens
const DelimiterToken LEFT_BRACKET = '{';
const DelimiterToken LEFT_PARENTHESIS = '(';
const DelimiterToken LEFT_SQUARE_BRACKET = '[';
const DelimiterToken RIGHT_BRACKET = '}';
const DelimiterToken RIGHT_PARENTHESIS = ')';
const DelimiterToken RIGHT_SQUARE_BRACKET = ']';

// Delimiter Token Vector
const DelimiterToken delimiters_vector() {
    const DelimiterToken delimiters[6] = {
        LEFT_BRACKET,
        LEFT_PARENTHESIS,
        LEFT_SQUARE_BRACKET,
        RIGHT_BRACKET,
        RIGHT_PARENTHESIS,
        RIGHT_SQUARE_BRACKET,
    };

    return *delimiters;
}
