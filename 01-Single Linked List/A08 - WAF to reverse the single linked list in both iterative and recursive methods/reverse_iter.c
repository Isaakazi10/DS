#include "sll.h"

/* Function to reverse the given single linked list */
int reverse_iter(Slist **head)
{
    // If head is equal to NULL then return FAILURE.
    if (*head == NULL)
    {
        return LIST_EMPTY;
    }

    // Create 2 pointer pointing towards head pointer.
    Slist *temp = *head, *prev = NULL, *next;

    while (temp->link != NULL)
    {
        prev = temp;

        if (*head == prev)
        {
            next = temp->link;
            prev->link = NULL;
        }

        temp = next;
        next = next->link;

        if (temp->link == NULL)
        {
            temp->link = prev;
            *head = temp;
            return SUCCESS;
        }

        temp->link = prev;
    }

    if (*head == temp)
    {
        return SUCCESS;
    }
}