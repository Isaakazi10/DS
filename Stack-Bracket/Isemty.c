#include "main.h"

int Isempty(St *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    return 0;
}