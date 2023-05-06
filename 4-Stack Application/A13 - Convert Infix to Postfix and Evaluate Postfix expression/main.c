/*
Name        : ISAA KAZI
Date        : 27/04/2023
Description : A13 - Convert Infix to Postfix and Evaluate Postfix expression
Sample I/O  :
Sample O/P  :
*/
#include "main.h"
#include <string.h>

int main()
{
	// Char array to store Infix_exp and Postfix_exp
	char Infix_exp[50], Postfix_exp[50];
	int result;

	// Declaration of Stack_k variable.
	Stack_t stk;
	stk.top = -1;

	printf("Enter the Infix expression : ");
	scanf("%s", Infix_exp);

	Infix_Postfix_conversion(Infix_exp, Postfix_exp, &stk);
	printf("PostFix expression : %s\n", Postfix_exp);
	stk.top = -1;
	result = Postfix_Eval(Postfix_exp, &stk);
	printf("\nResult : %d\n", result);
	return 0;
}
