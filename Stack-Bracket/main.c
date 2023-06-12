#include "main.h"

void creating_stack(St *sptr, int size)
{
    sptr->capacity = size;
    sptr->top = -1;
}

int main()
{
    int size;

    printf("Enter the Size: ");
    scanf("%d", &size);

    char str[size];

    printf("Enter the input: ");
    scanf("%s", str);

    St s;
    creating_stack(&s, size);

    for (int i = 0; '\0' != str[i]; i++)
    {
        if ('}' == str[i] && Isempty(&s) == 1)
        {
            printf("This string is not perfect...");
            return 0;
        }
        else if ('{' == str[i])
        {
            push(&s);
        }
        else
        {
            pop(&s);
        }
    }

    if (s.top == -1)
    {
        printf("Perfect");
    }
    else
    {
        printf("Not perfect");
    }
}