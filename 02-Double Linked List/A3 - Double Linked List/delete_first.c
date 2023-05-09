#include "dll.h"

int dl_delete_first(Dlist **head, Dlist **tail)
{
    // If *head and *tail are equal to NULL then return FAILURE.
    if ((*head == NULL) && (*tail == NULL))
    {
        return FAILURE;
    }

    // If *head is equal to *tail then free *head and assign *tail and *head NULL else excecute else-statement.
    if (*head == *tail)
    {
        free(*head);
        *tail = NULL;
        *head = NULL;
    }
    else
    {
        // Update *head to next node
        *head = (*head)->next;

        // And free temp.
        free((*head)->prev);
    }

    return SUCCESS;
}