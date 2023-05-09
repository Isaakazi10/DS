#include "stack.h"

/* Function for display the top of the element in Stack */
int Peek(Stack_t *s)
{
    // if  s->top is equal to FAILURE then return FAILURE else
    if (s->top == FAILURE)
    {
        return FAILURE;
    }
    else
    {
        return s->stack[s->top];
    }
}