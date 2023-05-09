#include "hash.h"

int delete_element(hash_t *arr, int data, int size)
{
    // i is less than size keep increamenting i.
    for (int i = 0; i < size; i++)
    {
        // Storing arr address in temp pointer.
        hash_t *temp = (arr + i);

        // If arr[i].value is equal to data
        if (arr[i].value == data)
        {
            // If temp link is equal NULL then make assign temp value -1 and return SUCCESS.
            if (temp->link == NULL)
            {
                temp->value = -1;
                return SUCCESS;
            }

            temp = temp->link;
            arr[i].link = temp->link;
            arr[i].value = temp->value;
            free(temp);
            return SUCCESS;
        }
        else
        {
            // While temp is not equal to NULL
            while (temp != NULL)
            {
                // Make a prev pointer and copy temp in prev.
                hash_t *prev = temp;

                // Update the temp to next node.
                temp = temp->link;

                // If temp is equal to NULL break the loop.
                if (temp == NULL)
                {
                    break;
                }

                // If temp of value is equal to data then copy temp link to prev link and free temp and return SUCCESS
                if (temp->value == data)
                {
                    prev->link = temp->link;
                    free(temp);
                    return SUCCESS;
                }
            }
        }
    }
    return DATA_NOT_FOUND;
}