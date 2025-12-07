#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

// Token Type Defintion
typedef char TokenType;

// Token Types
extern const TokenType ALPHABETIC[11];
extern const TokenType COMMENT[8];
extern const TokenType DELIMITER[10];
extern const TokenType END_OF_FILE[4];
extern const TokenType ESCAPE[7];
extern const TokenType KEYWORD[8];
extern const TokenType NUMBER[7];
extern const TokenType OPERATOR[9];

// Token Type Vector
const TokenType types_vector();

#endif