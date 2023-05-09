#include "dll.h"

int dl_insert_first(Dlist **head, Dlist **tail, int data)
{
    // Creating a new node to enter data.
    Dlist *new_node = malloc(sizeof(Dlist));
    // If new_node is equal to NULL return FAILURE
    if (new_node == NULL)
    {
        return FAILURE;
    }

    // Update data into new_node's data
    new_node->data = data;

    // If *head and *tail is equal to NULL excecute if-statement else excecute else-statement
    if ((*head == NULL) && (*tail == NULL))
    {
        // Update *head and *tail pointer with new_node address.
        *head = *tail = new_node;

        // Update new_node poiners(next and prev) with NULL.
        new_node->next = NULL;
        new_node->prev = NULL;
    }
    else
    {
        // Update *head->prev with new_node
        (*head)->prev = new_node;

        // Update new_node pointers.
        new_node->next = *head;
        new_node->prev = NULL;

        // Update *head pointer.
        *head = (*head)->prev;
    }
    return SUCCESS;
}