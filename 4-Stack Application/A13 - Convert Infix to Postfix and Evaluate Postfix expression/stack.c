#include "main.h"

// priority function gives priority to the operators.
int priority(char opr)
{
	switch (opr)
	{
	case '+':
		return 1;
		break;

	case '-':
		return 1;
		break;

	case '*':
		return 2;
		break;

	case '/':
		return 2;
		break;

	default:
		return 0;
		break;
	}
}

// push function to push data into stack.
void push(Stack_t *stk, int data)
{
	++(stk->top);
	stk->stack[stk->top] = data;
}

// pop function to delete the latest inserted data.
void pop(Stack_t *stk)
{
	if (stk->top != -1)
		--(stk->top);
}

// peek to return the latest inserted data in the data
int peek(Stack_t *stk)
{
	if (stk->top != -1)
	{
		return stk->stack[stk->top];
	}
	return -1;
}
