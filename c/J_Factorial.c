#include <stdio.h>

long long factorial(int n)
{
    if (n == 1)
    {
        return n;
    }

    long long digit = factorial(n - 1);

    return digit * n;
}

int main()
{
    int n;
    scanf("%d", &n);

    long long fact = factorial(n);
    printf("%lld", fact);

    return 0;
}