#include "hash.h"

void create_HT(hash_t *arr, int size)
{
    // for i is less than size i++.
    for (int i = 0; i < size; i++)
    {
        // Assigning array's value member -1.
        arr[i].value = -1;

        // Making value of array's link member to NULL.
        arr[i].link = NULL;
    }
}