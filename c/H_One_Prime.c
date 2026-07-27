#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int divisor_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisor_sum += i;
        }
    }

    if (divisor_sum == n + 1)
    {
        printf("YES");
    }
    else
    {

        printf("NO");
    }

    return 0;
}