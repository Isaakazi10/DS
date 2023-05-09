#include "stack.h"

int Peek(Stack_t **top)
{
    if (*top == NULL)
    {
        return FAILURE;
    }

    // Creating a pointer to transverse the linked list.
    Stack_t *temp = *top;

    // Transversing the node till last.
    while (temp->link == NULL)
    {
        temp = temp->link;
    }

    // The data is returned
    return temp->data;
}