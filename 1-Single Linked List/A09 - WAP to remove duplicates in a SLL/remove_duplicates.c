#include "sll.h"

// remove duplicate data's from list
int remove_duplicates(Slist **head)
{
    // If head is equal to NULL then return FAILURE.
    if (*head == NULL)
    {
        return FAILURE;
    }

    /* temp points to first node */
    Slist *temp = *head;

    //
    while (temp->link != NULL)
    {
        Slist *store = temp;
        Slist *prev = temp->link;

        while (prev->link != NULL)
        {
            if (temp->data == prev->data)
            {
                store->link = prev->link;
                free(prev);
                prev = store;
            }
            else
            {
                store = prev;
            }
            prev = prev->link;
        }

        if (prev->link == NULL)
        {
            if (prev->data == temp->data)
            {
                free(prev);
                store->link = NULL;
                return SUCCESS;
            }
        }

        temp = temp->link;
    }
}