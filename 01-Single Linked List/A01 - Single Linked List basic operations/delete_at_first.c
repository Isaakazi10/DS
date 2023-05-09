#include "sll.h"

int sl_delete_first(Slist **head)
{
    if (*head == NULL)
    {
        return FAILURE;
    }
    else
    {
        Slist *temp = *head;
        *head = (*head)->link;
        free(temp);
        return SUCCESS;
    }
}