#include "header.h"

int main()
{
    FILE *fptr = NULL;

    error_t open = openFile("data.csv", "r", &fptr);
    info_t *arr = malloc(5 * sizeof(info_t));

    if (open == FILE_NOT_FOUND)
    {
        printf("%s", "File not found");
    }
    else
    {
        char fileData[100] = {0};
        char *word;
        int i = 0;

        while (readFile(&fptr, fileData) == 1)
        {
            if (feof(fptr))
            {
                printf("%s", "End of file");
                break;
            }

            //printf("%s","File found");
            //printf("%s \n", fileData);

            info_t *person = (info_t *)malloc(sizeof(person));

            word = strtok(fileData, ",");
            strcpy(person->name, word);
            word = strtok(NULL, ",");
            strcpy(person->email, word);
            word = strtok(NULL, ",");
            strcpy(person->link, word);

            printf("Name: %s\n Email: %s\n Link: %s\n \n", person->name, person->email, person->link);
            strcpy(arr[i].name, person->name);
            strcpy(arr[i].email, person->email);
            strcpy(arr[i].link, person->link);

            i++;
            free(person);
        }

        sort(arr);
    }

    free(arr);
    fclose(fptr);
    return 0;
}