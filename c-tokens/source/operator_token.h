#ifndef OPERATOR_TOKEN_H
#define OPERATOR_TOKEN_H

// Operator Token Defintion
typedef char OperatorToken;

// Operator Tokens
extern const OperatorToken ADDITION;
extern const OperatorToken ANNOTATION;
extern const OperatorToken ASSIGNMENT;
extern const OperatorToken COLON;
extern const OperatorToken COMMA;
extern const OperatorToken DIVISION;
extern const OperatorToken DOLLAR_SIGN;
extern const OperatorToken EXCLUSIVE_OR;
extern const OperatorToken FIELD_ACCESS;
extern const OperatorToken GRAVE_ACCENT;
extern const OperatorToken GREATER_THAN;
extern const OperatorToken LESS_THAN;
extern const OperatorToken LOGICAL_CONJUCTION;
extern const OperatorToken LOGICAL_DISJUNCTION;
extern const OperatorToken LOGICAL_NEGATION;
extern const OperatorToken MODULUS;
extern const OperatorToken MULTIPLICATION;
extern const OperatorToken NULL_COALESCING;
extern const OperatorToken OCTOTHORPE;
extern const OperatorToken SEMI_COLON;
extern const OperatorToken SUBTRACTION;
extern const OperatorToken TILDE;
extern const OperatorToken UNDERSCORE;

// Operator Token Vector
const OperatorToken operators_vector();

#endif