#ifndef LSD_PARSER_H
#define LSD_PARSER_H

#include "token.h"
#include <stdint.h>
#include "string.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

enum _ParserStatus{ 
    PARSER_SUCCESS,
    PARSER_SYNTAX_ERROR
};
typedef enum _ParserStatus ParserStatus;

ParserStatus parser_start(TokenList* list, const char* source);
uint32_t parser_get_number(const char* buf);
TokenInst parser_get_inst(const char* buf);

#endif // LSD_PARSER_H