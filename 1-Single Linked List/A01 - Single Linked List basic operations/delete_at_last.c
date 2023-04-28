#include "sll.h"

int sl_delete_last(Slist **head)
{
    if (*head == NULL)
    {
        return FAILURE;
    }
    else
    {
        Slist *temp = *head;
        Slist *prev;

        while ((temp->link) != NULL)
        {
            prev = temp;
            temp = temp->link;
        }

        if (*head == temp)
        {
            free(temp);
            *head = NULL;
            return SUCCESS;
        }

        free(temp);
        prev->link = NULL;

        return SUCCESS;
    }
}