#include "header.h"

int readFile(FILE **fptr, char* data){
    return fscanf(*fptr, "%s", data);
}