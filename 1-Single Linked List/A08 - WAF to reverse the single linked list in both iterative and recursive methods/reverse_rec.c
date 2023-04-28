#include "sll.h"

int reverse_recursion(Slist **head)
{
    if (*head == NULL) // check list is empty
        return LIST_EMPTY;

    // declaring a static variable and static struct pointers
    static int n = 0;
    static Slist *prev, *cur, *next;

    if (n == 0) // assigning value to the pointers only for first time
    {
        prev = NULL;
        cur = *head;
        next = cur->link;
        n++;
    }

    // updating the pointers
    cur->link = prev;
    prev = cur;
    cur = next;
    if (next != NULL)
    {
        next = next->link;
        reverse_recursion(head); // function call
    }

    // updating the head once fun call is ended
    *head = prev;
    return SUCCESS;
}