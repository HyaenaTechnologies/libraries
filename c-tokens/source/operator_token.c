#include "operator_token.h"

// Operator Tokens
const OperatorToken ADDITION  = '+';
const OperatorToken ANNOTATION  = '@';
const OperatorToken ASSIGNMENT  = '=';
const OperatorToken COLON  = ':';
const OperatorToken COMMA  = ',';
const OperatorToken DIVISION  = '/';
const OperatorToken DOLLAR_SIGN  = '$';
const OperatorToken EXCLUSIVE_OR  = '^';
const OperatorToken FIELD_ACCESS  = '.';
const OperatorToken GRAVE_ACCENT  = '`';
const OperatorToken GREATER_THAN  = '>';
const OperatorToken LESS_THAN  = '<';
const OperatorToken LOGICAL_CONJUCTION  = '&';
const OperatorToken LOGICAL_DISJUNCTION  = '|';
const OperatorToken LOGICAL_NEGATION  = '!';
const OperatorToken MODULUS  = '%';
const OperatorToken MULTIPLICATION  = '*';
const OperatorToken NULL_COALESCING  = '?';
const OperatorToken OCTOTHORPE  = '#';
const OperatorToken SEMI_COLON  = ';';
const OperatorToken SUBTRACTION  = '-';
const OperatorToken TILDE  = '~';
const OperatorToken UNDERSCORE  = '_';

// Operator Token Vector
const OperatorToken operators_vector() {
    const OperatorToken operators[23] = {
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

