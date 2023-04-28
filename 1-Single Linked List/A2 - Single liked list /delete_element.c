#include "sll.h"

int sl_delete_element(Slist **head, data_t data)
{
    // If head is equal to NULL then return FAILURE.
    if (*head == NULL)
    {
        return FAILURE;
    }

    // Make 2 pointer and one among them pointing towards head.
    Slist *temp = *head, *prev = NULL;

    // if temp->data is equal to data then excecute if-statement
    if (temp->data == data)
    {
        // Algorithum for delete node
        (*head) = temp->link;
        free(temp);
        return SUCCESS;
    }

    // While temp->link is not equal to NULL then keep running the loop.
    while (temp->link != NULL)
    {
        // if temp->data is equal to data then excecute if-statement
        if (temp->data == data)
        {
            // Algorithum for deleting.
            prev->link = temp->link;
            free(temp);
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
        // if temp->data is equal to data then excecute if-statement
        if (temp->data == data)
        {
            // Algorithum for deleting node.
            prev->link = NULL;
            free(temp);
            return SUCCESS;
        }
    }

    // return Data not found.
    return DATA_NOT_FOUND;
}