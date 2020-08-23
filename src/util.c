#include "../include/util.h"

char* read_ascii_file(const char* path){
    //Create a file
    FILE* file = fopen(path, "r");
    if(!file){
        printf("Error Code 002 info- '%s'\n", path);
        return NULL;
    }

    // Get the File Size
    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    fseek(file, 0, SEEK_SET);

    // Read File
    char* buf = (char*) malloc(sizeof(char) * (size + 1));
    if(!buf){
        printf("Error 003\n");
        return NULL;  
    }
    fread(buf, 1, size, file);
    buf[size] = '\0';
    fclose(file);

    //Return contents
    return buf;
}