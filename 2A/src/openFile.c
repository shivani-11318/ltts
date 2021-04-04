#include "header.h"

error_t openFile(char *address, char *mode, FILE **fptr)
{
    *fptr = fopen(address, mode);

    if (*fptr == NULL)
    {
        return FILE_NOT_FOUND;
    }
    else
    {
        return SUCCESS;
    }
}