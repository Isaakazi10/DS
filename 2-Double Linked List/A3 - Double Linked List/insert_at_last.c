#include "dll.h"

int dl_insert_last(Dlist **head, Dlist **tail, int data)
{
    // Creating a new node to enter data.
    Dlist *new_node = malloc(sizeof(Dlist));

    // If new_node is equal to NULL
    if (new_node == NULL)
    {
        return FAILURE;
    }

    // Storing of data in new node.
    new_node->data = data;

    // *head and *tail is equal to NULL then exceucte if-statement else else-statement.
    if ((*head == NULL) && (*tail == NULL))
    {
        *head = *tail = new_node;
        new_node->next = NULL;
        new_node->prev = NULL;
    }
    else
    {

        (*tail)->next = new_node;

        // Update the new_node pointers
        new_node->prev = *tail;
        new_node->next = NULL;

        // Update the *tail pointer.
        *tail = (*tail)->next;
    }

    return SUCCESS;
}