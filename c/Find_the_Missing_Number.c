#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long mult = a * b * c;

        if (m % mult == 0)
        {
            printf("%lld\n", m / mult);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}