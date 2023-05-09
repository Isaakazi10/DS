#include "stack.h"

/* Fuction for inserting the element */
int Push(Stack_t *s, int element)
{
    // If (s->capacity - 1) is equal to s->top then stack is full
    if ((s->capacity - 1) == (s->top))
    {
        return FAILURE;
    }
    else
    {
        // Algorithm to insert element in stack.
        (s->top)++;
        s->stack[s->top] = element;
        return SUCCESS;
    }
}