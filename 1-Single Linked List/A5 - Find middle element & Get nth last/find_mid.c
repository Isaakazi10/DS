#include "sll.h"
/* Function to get the middle of the linked list*/
int find_mid(Slist *head, int *mid)
{
    // If head is equal to NULL then return FAILURE.
    if (head == NULL)
    {
        return LIST_EMPTY;
    }

    // Make 2 pointer and one among them pointing towards head.
    Slist *temp = head, *prev = head;

    // While temp->link is equal to NULL
    while (temp->link != NULL)
    {
        // Update the pointers
        prev = prev->link;
        temp = (temp->link);

        // If temp->link is equal to NUll then updatae the temp pointer
        if (temp->link != NULL)
        {
            temp = temp->link;
        }
    }

    *mid = prev->data;
}