#ifndef DELIMITER_TOKEN_H
#define DELIMITER_TOKEN_H

// Delimiter Token Defintion
typedef char DelimiterToken;

// Delimiter Tokens
extern const DelimiterToken LEFT_BRACKET;
extern const DelimiterToken LEFT_PARENTHESIS;
extern const DelimiterToken LEFT_SQUARE_BRACKET;
extern const DelimiterToken RIGHT_BRACKET;
extern const DelimiterToken RIGHT_PARENTHESIS;
extern const DelimiterToken RIGHT_SQUARE_BRACKET;

// Delimiter Token Vector
const DelimiterToken delimiters_vector();

#endif