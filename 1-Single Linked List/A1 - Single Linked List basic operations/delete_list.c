#include "sll.h"

int sl_delete_list(Slist **head)
{
    // Make a 2 pointer.
    Slist *temp = *head, *prev;

    // if head is equal to NULL then return FAILURE
    if (*head == NULL)
    {
        return FAILURE;
    }

    while (temp->link != NULL)
    {
        prev = temp;
        temp = temp->link;
        free(prev);
    }

    (*head) = NULL;
    return SUCCESS;
}