#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum error_t
{
    FILE_NOT_FOUND = 1,
    SUCCESS = 0
} error_t;

typedef struct info_t
{
    char name[100];
    char email[100];
    char link[100];
} info_t;

error_t openFile(char *address, char *mode, FILE **fptr);

int readFile(FILE **fptr, char *data);

int sort(info_t *person);
