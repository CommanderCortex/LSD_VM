#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/util.h"
#include "../include/token.h"
#include "../include/parser.h"

// LSD compile <filename>.lsd

int main(int argc, char** argv){
    if(argc < 3){
        printf("Error Code 001\n");
        return 1;
    }

    if(strcmp(argv[1], "compile") == 0){
        char* source = read_ascii_file(argv[2]);
        TokenList tokens;
        token_list_create(&tokens, 1);
        ParserStatus pstat = parser_start(&tokens, source);
        if(pstat != PARSER_SUCCESS)
            printf("Error With Parser");
            return 1;

        //TODO: Remove for debug
        for(int i =0; i<tokens.ptr; i++){
            Token* t = token_list_get(&tokens, i);
            printf("%d, %d, %d\n", t->type, t->data, t->line);
        }
        token_list_destroy(&tokens);
        free(source);
    }
    return 0;
}