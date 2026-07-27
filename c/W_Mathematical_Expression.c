#include <stdio.h>

int main()
{
    int a, b, c;
    char s, q;

    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    if (s == '+')
    {
        if (c == a + b)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a + b);
        }
    }
    else if (s == '-')
    {
        if (c == a - b)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a - b);
        }
    }
    else
    {
        if (c == a * b)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a * b);
        }
    }

    return 0;
}