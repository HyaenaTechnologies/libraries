#include "token_type.h"

// Token Types
const TokenType ALPHABETIC[11] = "ALPHABETIC";
const TokenType COMMENT[8] = "COMMENT";
const TokenType DELIMITER[10] = "DELIMITER";
const TokenType END_OF_FILE[4] = "EOF";
const TokenType ESCAPE[7] = "ESCAPE";
const TokenType KEYWORD[8] = "KEYWORD";
const TokenType NUMBER[7] = "NUMBER";
const TokenType OPERATOR[9] = "OPERATOR";

// Token Type Vector
const TokenType types_vector() {
    const TokenType token_types[8] = {
        ALPHABETIC[11],
        COMMENT[8],
        DELIMITER[10],
        END_OF_FILE[4],
        ESCAPE[7],
        KEYWORD[8],
        NUMBER[7],
        OPERATOR[9],
    };

    return *token_types;
}
