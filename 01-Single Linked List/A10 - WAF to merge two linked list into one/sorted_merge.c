#include "sll.h"

int sorted_merge(Slist **head1, Slist **head2)
{
    // if head1 and head2 are eqaul to null then return empty list.
    if ((*head1 == NULL) && (*head2 == NULL))
    {
        return LIST_EMPTY;
    }
    // if head2 is not equal to null and head1 are eqaul to null then  exceucte if-statement
    else if ((*head1 == NULL) && (*head2 != NULL))
    {
        *head1 = *head2;
    }
    else
    {
        Slist *temp = *head1;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = *head2;
    }

    // calling sort function.
    sort(head1);
    return SUCCESS;
}