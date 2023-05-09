#include "sll.h"

/* Function for insert the number in sorted linked list */
int insert_sorted(Slist **head, data_t data)
{
    Slist *new = malloc(sizeof(Slist));
    if (new == NULL)
    {
        return FAILURE;
    }
    else
    {
        Slist *temp = *head, *next = *head;

        new->data = data;
        new->link = NULL;

        // If head is equal to NULL then return SUCCESS.
        if (*head == NULL)
        {
            new->link = NULL;
            *head = new;
            return SUCCESS;
        }
        else if (temp->link == NULL)
        {
            if (temp->data > data)
            {
                new->link = temp;
                *head = new;
                return SUCCESS;
            }
            else
            {
                temp->link = new;
                return SUCCESS;
            }
        }
        else
        {
            // Craeting two pointers for tranversing the nodes.
            Slist *temp = *head;
            Slist *prev = NULL;

            // While temp->link is not equal to NULL keep running the loop.
            while (temp->link != NULL)
            {
                // Algorithum for finding where the data fits in the node
                prev = temp;
                if (data < temp->data)
                {
                    break;
                }
                temp = temp->link;
            }

            if (data < temp->data)
            {
                if (*head == temp)
                {
                    *head = new;
                    new->link = temp;
                    return SUCCESS;
                }
                else
                {
                    prev->link = new;
                    new->link = temp;
                    return SUCCESS;
                }
            }
            else
            {
                temp->link = new;
                return SUCCESS;
            }
        }
    }
}