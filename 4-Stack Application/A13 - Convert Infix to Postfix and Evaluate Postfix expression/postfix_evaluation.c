
#include "main.h"

int Postfix_Eval(char *Postfix_exp, Stack_t *stk)
{
    // Initialization of variables.
    int i = 0, opan1 = 0, opan2 = 0;

    // While Postfix_exp[i] is not equal to 0;
    while (Postfix_exp[i] != 0)
    {
        // If Postfix_exp[i] is withiin range of 48 and 57 then push Postfix_exp[i] into the stack.
        if ((Postfix_exp[i] >= 48) && (Postfix_exp[i] <= 57))
        {
            push(stk, (Postfix_exp[i] - 48));
        }
        else
        {
            // If function peek returns -1 then break out of this loop
            if (peek(stk) == -1)
            {
                break;
            }
            // Store the top most element in stack in opan2 and store 2nd top element in opan1 and pop both.
            opan2 = peek(stk);
            pop(stk);
            // If function peek returns -1 then break out of this loop
            if (peek(stk) == -1)
            {
                break;
            }
            opan1 = peek(stk);
            pop(stk);

            // Depending upon operators in Postfix_exp[i] we do operation and store that opeartion in top most stack
            switch (Postfix_exp[i])
            {
            case '+':
                push(stk, (opan1 + opan2));
                break;

            case '-':
                push(stk, (opan1 - opan2));
                break;

            case '*':
                push(stk, (opan1 * opan2));
                break;

            case '/':
                push(stk, (opan1 / opan2));
                break;
            }
        }
        i++;
    }

    // returning the top most element.
    return peek(stk);
}