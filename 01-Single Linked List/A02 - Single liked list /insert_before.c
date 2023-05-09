#include "sll.h"

int sl_insert_before(Slist **head, data_t g_data, data_t ndata)
{
    // If head is equal to NULL then return FAILURE.
    if (*head == NULL)
    {
        return LIST_EMPTY;
    }

    // Make 2 pointer and one among them pointing towards head.
    Slist *temp = *head, *prev = NULL;

    // Make a new node and store the n_data in new_data.
    Slist *new = (Slist *)malloc(sizeof(Slist));
    new->data = ndata;

    // if temp->data is equal to g_data then excecute if-statement
    if (temp->data == g_data)
    {
        // Algorithum for inserting new node
        new->link = temp;
        (*head) = new;
        return SUCCESS;
    }

    // While temp->link is not equal to NULL then keep running the loop.
    while (temp->link != NULL)
    {
        // if temp->data is equal to g_data then excecute if-statement
        if (temp->data == g_data)
        {
            // Algorithum for inserting node before g_data.
            prev->link = new;
            new->link = temp;
            return SUCCESS;
        }
        else
        {
            prev = temp;
        }

        // Updating the temp.
        temp = temp->link;
    }

    // if temp->link is equal to NULL then excecute if-statement
    if (temp->link == NULL)
    {
        // if temp->data is equal to g_data then excecute if-statement
        if (temp->data == g_data)
        {
            // Algorithum for inserting new node
            prev->link = new;
            new->link = temp;
            return SUCCESS;
        }
    }

    // return Data not found.
    return DATA_NOT_FOUND;
}