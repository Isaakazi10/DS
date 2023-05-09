#include "hash.h"

int search_HT(hash_t *arr, int data, int size)
{
    // i is less than size keep increamenting i.
    for (int i = 0; i < size; i++)
    {
        // Storing arr address in temp pointer.
        hash_t *temp = (arr + i);

        // While temp is not equal to NULL
        while (temp != NULL)
        {
            // If temp of value is equal to data then return SUCCESS
            if (temp->value == data)
            {
                return SUCCESS;
            }
            // Update the temp to next node.
            temp = temp->link;
        }
    }
    return DATA_NOT_FOUND;
}