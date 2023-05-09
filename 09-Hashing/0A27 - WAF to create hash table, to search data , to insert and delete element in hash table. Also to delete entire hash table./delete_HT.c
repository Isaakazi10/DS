#include "hash.h"

int destroy_HT(hash_t *arr, int size)
{
    // i is less than size keep increamenting i.
    for (int i = 0; i < size; i++)
    {
        // Storing arr address in temp pointer.
        hash_t *temp = (arr + i);
        temp->value = -1;

        // While temp is not equal to NULL
        while (temp != NULL)
        {
            // Copy temp in prev pointer and free prev pointer.
            hash_t *prev = temp;

            // Update the temp to next node.
            temp = temp->link;

            // In order to skip freeing the array.
            if ((arr + i) != prev)
            {
                free(prev);
            }
        }

        arr[i].link = NULL;
    }
    return SUCCESS;
}