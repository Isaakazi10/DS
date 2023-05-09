#include "sll.h"
/* Function to get the nth node from the last of a linked list*/
int find_nth_last(Slist *head, int pos, int *data)
{
    int tcount = 1, pcount = 0;

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
        tcount++;
        temp = (temp->link);
    }

    pcount = tcount - pos;
    if ((pos < 1) || (pcount < 0))
    {
        return FAILURE;
    }

    while (pcount)
    {
        prev = prev->link;
        pcount--;
    }

    *data = prev->data;
    return SUCCESS;
}