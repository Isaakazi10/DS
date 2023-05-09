#include "stack.h"

int Pop(Stack_t **top)
{
    // If top is equal to NULL then return FAILURE
    if (*top == NULL)
    {
        return FAILURE;
    }

    Stack_t *temp = *top;

    if ((*top)->link == NULL)
    {
        *top = NULL;
    }
    else
    {
        *top = temp->link;
        free(temp);
    }

    return SUCCESS;
}