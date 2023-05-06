#include "stack.h"

int Push(Stack_t **top, data_t data)
{
    // Creating a new node. and if new is equal to NULL then return FAILURE
    Stack_t *new = malloc(sizeof(Stack_t));
    if (new == NULL)
    {
        return FAILURE;
    }

    // Inserting data in new node and new node link to link.
    new->data = data;
    new->link = NULL;

    // If top is equal to NULL then excecute if-statement.
    if (*top == NULL)
    {
        *top = new;
        return SUCCESS;
    }

    new->link = *top;
    *top = new;

    return SUCCESS;
}