#include "main.h"

int Prefix_Eval(char *Prefix_exp, Stack_t *stk)
{
    // Initialization of variables.
    int i = 0, opan1 = 0, opan2 = 0;

    // While Prefix_exp[i] is not equal to 0;
    while (Prefix_exp[i] != 0)
    {
        // If Prefix_exp[i] is withiin range of 48 and 57 then push Prefix_exp[i] into the stack.
        if ((Prefix_exp[i] >= 48) && (Prefix_exp[i] <= 57))
        {
            push(stk, (Prefix_exp[i] - 48));
        }
        else
        {
            // If function peek returns -1 then break out of this loop
            if (peek(stk) == -1)
            {
                break;
            }
            // Store the top most element in stack in opan1 and store 2nd top element in opan2 and pop both.
            opan2 = peek(stk);
            pop(stk);
            // If function peek returns -1 then break out of this loop
            if (peek(stk) == -1)
            {
                break;
            }
            opan1 = peek(stk);
            pop(stk);

            // Depending upon operators in Prefix_exp[i] we do operation and store that opeartion in top most stack
            switch (Prefix_exp[i])
            {
            case '+':
                push(stk, (opan2 + opan1));
                break;

            case '-':
                push(stk, (opan2 - opan1));
                break;

            case '*':
                push(stk, (opan2 * opan1));
                break;

            case '/':
                push(stk, (opan2 / opan1));
                break;
            }
        }
        i++;
    }

    // returning the top most element.
    return peek(stk);
}