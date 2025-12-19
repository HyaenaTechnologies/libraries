#include "operator_token.h"

// Operator Tokens
const char ADDITION  = '+';
const char ANNOTATION  = '@';
const char ASSIGNMENT  = '=';
const char COLON  = ':';
const char COMMA  = ',';
const char DIVISION  = '/';
const char DOLLAR_SIGN  = '$';
const char EXCLUSIVE_OR  = '^';
const char FIELD_ACCESS  = '.';
const char GRAVE_ACCENT  = '`';
const char GREATER_THAN  = '>';
const char LESS_THAN  = '<';
const char LOGICAL_CONJUCTION  = '&';
const char LOGICAL_DISJUNCTION  = '|';
const char LOGICAL_NEGATION  = '!';
const char MODULUS  = '%';
const char MULTIPLICATION  = '*';
const char NULL_COALESCING  = '?';
const char OCTOTHORPE  = '#';
const char SEMI_COLON  = ';';
const char SUBTRACTION  = '-';
const char TILDE  = '~';
const char UNDERSCORE  = '_';

// Operator Token Array
const char operators_array() {
    const char operators[23] = {
        ADDITION,
        ANNOTATION,
        ASSIGNMENT,
        COLON,
        COMMA,
        DIVISION,
        DOLLAR_SIGN,
        EXCLUSIVE_OR,
        FIELD_ACCESS,
        GRAVE_ACCENT,
        GREATER_THAN,
        LESS_THAN,
        LOGICAL_CONJUCTION,
        LOGICAL_DISJUNCTION,
        LOGICAL_NEGATION,
        MODULUS,
        MULTIPLICATION,
        NULL_COALESCING,
        OCTOTHORPE,
        SEMI_COLON,
        SUBTRACTION,
        TILDE,
        UNDERSCORE,
    };

    return *operators;
}

