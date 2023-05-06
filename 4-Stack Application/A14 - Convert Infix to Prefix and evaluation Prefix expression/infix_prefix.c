#include "main.h"

int Infix_Prefix_conversion(char *Infix_exp, char *Prefix_exp, Stack_t *stk)
{
    // Initialiing the variables;
    int i = 0, j = 0;

    // While Infix_exp[i] is not equal to 0;
    while (Infix_exp[i] != 0)
    {
        // If Infix_exp[i] is withiin range of 48 and 57 then store that char in Prefix_exp[j] and j++.
        if ((Infix_exp[i] >= 48) && (Infix_exp[i] <= 57))
        {
            Prefix_exp[j] = Infix_exp[i];
            j++;
        }
        else
        {
            // If stk->top is equal to -1 or Infix_exp is equal to char ')' then push the Infix_exp into the stack.
            if ((stk->top == -1) || (Infix_exp[i] == ')'))
            {
                push(stk, Infix_exp[i]);
            }
            // Infic_exp[i] is equa; to char '(' then excecute if-statement.
            else if (Infix_exp[i] == '(')
            {
                // while the top most element in stack is equal to char ')' then keep running the loop
                while (stk->stack[stk->top] != ')')
                {
                    // Store the top most element of stack in Prefix_exp[j] then pop the same element and j++.
                    Prefix_exp[j] = peek(stk);
                    pop(stk);
                    j++;
                }
                // If The top most element is equal to char ')' then pop the element from the stack.
                if (stk->stack[stk->top] == ')')
                {
                    pop(stk);
                }
            }
            // If proiority of Infix_exp is greater than proirity of top most element of the stack then push then Infix_exp[i] in to the stack.
            else if (priority(Infix_exp[i]) >= priority(stk->stack[stk->top]))
            {
                push(stk, Infix_exp[i]);
            }
            else
            {
                // While priotity of Infix_exp[i] is less than equal to priority of top most element of stack then
                while (priority(Infix_exp[i]) < priority(stk->stack[stk->top]))
                {
                    // store the top most element in stack in Prefix_exp[j] and pop the top most element in stack and j++
                    Prefix_exp[j] = peek(stk);
                    pop(stk);
                    j++;
                    // If function peek returns -1 then break out of this loop
                    if (peek(stk) == -1)
                    {
                        break;
                    }
                }
                // Push Infix-exp[i] into the stack.
                push(stk, Infix_exp[i]);
            }
        }
        i++;
    }
    // If Infix_exp is equal to zero
    if (Infix_exp[i] == 0)
    {
        // Pop all the elemnts in stack in Prefix_exp[j].
        while (stk->top != -1)
        {
            Prefix_exp[j] = peek(stk);
            pop(stk);
            j++;
        }
    }
    Prefix_exp[j] = 0;
}