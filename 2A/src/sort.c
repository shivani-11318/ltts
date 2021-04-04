#include "header.h"

int comparator(const void* p, const void* q)
{
    return strcmp(((info_t*)p)->name, ((info_t*)q)->name);
}

int sort(info_t *person)
{
    if (person == NULL)
    {
        return 0;
    }
    qsort(person, 3, sizeof(info_t), comparator);
    printf("After sorting: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s \n", (person + i)->name);
        printf("Email: %s \n", (person + i)->email);
        printf("Link: %s \n", (person + i)->link);
    }
    return 1;
}
