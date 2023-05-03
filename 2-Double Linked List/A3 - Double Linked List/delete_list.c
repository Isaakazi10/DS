#include "dll.h"

int dl_delete_list(Dlist **head, Dlist **tail)
{
    // If *head and *tail are equal to NULL then return FAILURE.
    if ((*head == NULL) && (*tail == NULL))
    {
        return FAILURE;
    }

    // While *head and *tail are not equal to NULLkeep running the loop
    while ((*head != NULL) && (*tail != NULL))
    {
        // If *head is equal to *tail then free *head and assign *tail and *head NULL and return SUCCESS.
        if (*head == *tail)
        {
            free(*head);
            *head = NULL;
            *tail = NULL;
            return SUCCESS;
        }

        // Update the head pointer.
        *head = (*head)->next;
        // Free the previous pointer.
        free((*head)->prev);
    }
}