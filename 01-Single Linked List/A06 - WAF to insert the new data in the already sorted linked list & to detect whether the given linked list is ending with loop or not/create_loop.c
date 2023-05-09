#include "sll.h"

/* Function to create the loop */
int create_loop(Slist **head, data_t data)
{
    // If head is equal to NULL then return FAILURE.
    if (*head == NULL)
    {
        return LIST_EMPTY;
    }

    // Create 2 pointer pointing towards head pointer.
    Slist *temp = *head, *prev = NULL;

    while (temp->link != NULL)
    {
        if (temp->data == data)
        {
            prev = temp;
        }

        temp = temp->link;

        if (temp->link == NULL)
        {
            if (temp->data == data)
            {
                temp->link = temp;
                return SUCCESS;
            }
        }
    }

    if (temp == *head)
    {
        if (temp->data == data)
        {
            temp->link = temp;
            return SUCCESS;
        }
    }

    if (prev == NULL)
    {
        return DATA_NOT_FOUND;
    }

    temp->link = prev;
    return SUCCESS;
}