#include "dll.h"

int dl_delete_last(Dlist **head, Dlist **tail)
{
    // If *head and *tail are equal to NULL then return FAILURE.
    if ((*head == NULL) && (*tail == NULL))
    {
        return FAILURE;
    }

    // If *head is equal to *tail then free *tail and assign *tail and *head NULL else excecute else-statement.
    if (*head == *tail)
    {
        free(*tail);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        // Update *tail to previous node
        *tail = (*tail)->prev;

        // And free temp.
        free((*tail)->next);

        // Update *tail's next pointer with NULL.
        (*tail)->next = NULL;
    }

    return SUCCESS;
}