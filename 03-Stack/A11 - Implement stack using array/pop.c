#include "stack.h"

/* Function for Poping the element */
int Pop(Stack_t *s)
{
    // if  s->top is equal to FAILURE then return FAILURE else s->top--.
    if (s->top == FAILURE)
    {
        return FAILURE;
    }
    else
    {
        s->top--;
        return SUCCESS;
    }
}