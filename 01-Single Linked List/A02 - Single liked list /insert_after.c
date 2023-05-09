#include "sll.h"

int sl_insert_after(Slist **head, data_t g_data, data_t ndata)
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

    // While temp->link is not equal to NULL then keep running the loop.
    while (temp->link != NULL)
    {
        // if temp->data is equal to g_data then excecute if-statement
        if (temp->data == g_data)
        {
            // Algorithum for inserting node ater g_data.
            prev = temp;
            temp = temp->link;

            prev->link = new;

            new->link = temp;
            return SUCCESS;
        }

        // Updating the temp.
        temp = temp->link;
    }

    // if temp->link is equal to NULL then
    if (temp->link == NULL)
    {
        // If temp->data is equal t g_data then
        if (temp->data == g_data)
        {
            // Algorithum for inserting node after g_data
            temp->link = new;

            new->link = NULL;
            return SUCCESS;
        }
    }
    // return Data not found.
    return DATA_NOT_FOUND;
}