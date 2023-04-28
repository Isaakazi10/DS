#include "sll.h"

int sl_sort(Slist **head)
{
    // If head is equal to NULL then return FAILURE.
    if (*head == NULL)
    {
        return LIST_EMPTY;
    }

    // Make 2 pointer and one among them pointing towards head.
    Slist *temp = *head, *prev = NULL, *sort = NULL, *ptemp = NULL;
    int count = 1;

    while (temp->link != NULL)
    {
        count++;
        temp = temp->link;
    }

    for (int i = 0; i < count; i++)
    {
        temp = *head;
        prev = temp->link;

        for (int j = 0; j < (count - i - 1); j++)
        {
            if (*head == temp)
            {
                if (temp->data > prev->data)
                {
                    sort = prev->link;
                    prev->link = temp;
                    temp->link = sort;
                    *head = ptemp = prev;
                }
                else
                {
                    sort = prev->link;
                    ptemp = temp;
                    temp = temp->link;
                }
            }
            else
            {
                if (temp->data > prev->data)
                {
                    sort = prev->link;
                    prev->link = temp;
                    temp->link = sort;
                    ptemp->link = prev;
                    ptemp = ptemp->link;
                }
                else
                {
                    sort = prev->link;
                    ptemp = temp;
                    temp = temp->link;
                }
            }
            prev = sort;
        }
    }
    return SUCCESS;
}