#include "sll.h"

int sl_insert_nth(Slist **head, data_t data, data_t n)
{

    // Make 2 pointer and one among them pointing towards head.
    Slist *temp = *head, *prev = NULL;

    // Make a new node and store the n_data in new_data.
    Slist *new = (Slist *)malloc(sizeof(Slist));
    new->data = data;

    // If head is equal and n is equal to 1.
    if ((*head == NULL) && (n == 1))
    {
        (*head) = new;
        new->link = NULL;
        return SUCCESS;
    }
    else if (*head == NULL)
    {
        return LIST_EMPTY;
    }

    // While n is not equal to 1 then keep runnig the loop.
    while (n != 1)
    {
        // If temp->link is equal to NULL then excecute if-statement
        if (temp->link == NULL)
        {
            // if n is equal to 1 then return POSITION_NOT_FOUND else break;
            if (n == 2)
            {
                break;
            }
            if (n != 1)
            {
                return POSITION_NOT_FOUND;
            }
            break;
        }

        // Updating the prev and temp pointers and decrementing n.
        prev = temp;
        temp = temp->link;
        n--;
    }

    // if temp is equal to head the excecute if-statement else else-statement
    if (temp == *head)
    {
        // Algorithum for insersting node.
        new->link = temp;
        (*head) = new;
        return SUCCESS;
    }
    else if (temp->link == NULL && n == 2)
    {
        temp->link = new;
        new->link = NULL;
    }
    else
    {
        // Algorithum for insersting node.
        prev->link = new;
        new->link = temp;
        return SUCCESS;
    }

    return POSITION_NOT_FOUND;
}