#include "sll.h"

/* Function for finding the loop in the link */
int find_loop(Slist *head)
{
    // If head is equal to NULL then return FAILURE.
    if (head == NULL)
    {
        return LIST_EMPTY;
    }

    // Create 2 pointer pointing towards head pointer.
    Slist *temp = head, *prev = head;

    // while temp->link is not equal to NULL eep running the loop.
    while (temp->link != NULL)
    {
        // Update the pointers
        prev = prev->link;
        temp = (temp->link);

        // If temp->link is equal to NUll then update the temp pointer
        if (temp->link != NULL)
        {
            temp = temp->link;
            // if prev is equal to temp then return SUCCESS
            if (prev == temp)
            {
                return SUCCESS;
            }
        }
    }

    // Return loop not found.
    return LOOP_NOT_FOUND;
}