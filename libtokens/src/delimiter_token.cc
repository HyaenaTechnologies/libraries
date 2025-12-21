#include "delimiter_token.h"

// Delimiter Tokens
const char LEFT_BRACKET = '{';
const char LEFT_PARENTHESIS = '(';
const char LEFT_SQUARE_BRACKET = '[';
const char RIGHT_BRACKET = '}';
const char RIGHT_PARENTHESIS = ')';
const char RIGHT_SQUARE_BRACKET = ']';

// Delimiter Token Array
const char delimiters_array() {
  const char delimiters[6] = {
      LEFT_BRACKET,  LEFT_PARENTHESIS,  LEFT_SQUARE_BRACKET,
      RIGHT_BRACKET, RIGHT_PARENTHESIS, RIGHT_SQUARE_BRACKET,
  };

  return *delimiters;
}
