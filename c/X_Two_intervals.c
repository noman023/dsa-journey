#include <stdio.h>

// not submitted yet

int main()
{
    int a, b, c, d;
    scanf("%d %D %d %d", &a, &b, &c, &d);

    if (b < c || a > d)
    {
        printf("-1");
    }
    else if ((a <= c && a <= d) && (b >= c && b >= d))
    {
        printf("%d %d", c, d);
    }
    else if ((c >= a && d >= a) && (c <= b && d <= b))
    {
        printf("%d %d", a, b);
    }

    else if (c >= a && c <= b && b <= d)
    {
        printf("%d %d", c, b);
    }
    else if (a <= c && a <= d && d <= b)
    {
        printf("%d %d", a, d);
    }

    return 0;
}