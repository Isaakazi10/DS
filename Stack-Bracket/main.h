#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    unsigned int capacity;
    int top;
} St;

void push(St *sptr);
void pop(St *sptr);
int Isempty(St *sptr);