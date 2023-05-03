#include "dll.h"

int dl_insert_before(Dlist **head, Dlist **tail, int gdata, int ndata)
{
    // If *head and *tail is equal to NULL return LIST_EMPTY
    if ((*head == NULL) && (*tail == NULL))
    {
        return LIST_EMPTY;
    }

    // Creating a new node to enter data.
    Dlist *new_node = malloc(sizeof(Dlist));
    // If new_node is equal to NULL then return FAILURE
    if (new_node == NULL)
    {
        return FAILURE;
    }

    // Update data into new_node's data and update new_nodes pointers
    new_node->data = ndata;
    new_node->prev = NULL;
    new_node->next = NULL;

    // Storing head in temp pointer.
    Dlist *temp = *head;

    // While temp not equal to *tail keep running the loop.
    while (temp != *tail)
    {
        // temp->data is equal to gdata excecute if-statement
        if (temp->data == gdata)
        {
            // temp->next is equal to null exceute if-statement
            if (*head == temp)
            {
                new_node->next = temp;
                temp->prev = new_node;
                *head = new_node;
                return SUCCESS;
            }

            // Update the new_nodes pointers
            new_node->prev = temp->prev;
            new_node->next = temp;
            new_node->prev->next = new_node;
            temp->prev = new_node;
            return SUCCESS;
        }
        // Update the temp
        temp = temp->next;
    }

    // temp->next is equal to null exceute if-statement
    if (temp->next == NULL)
    {
        // temp->data is equal to gdata excecute if-statement
        if (temp->data == gdata)
        {
            // temp is equal to *head then excecute if-statement.
            if (*head == temp)
            {
                new_node->next = temp;
                temp->prev = new_node;
                *head = new_node;
                return SUCCESS;
            }

            // Update the pointers
            new_node->prev = temp->prev;
            new_node->next = temp;
            new_node->prev->next = new_node;
            temp->prev = new_node;
            return SUCCESS;
        }
    }

    return DATA_NOT_FOUND;
}