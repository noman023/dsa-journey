#include<stdio.h>

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    int digit_a = a % 10;
    int digit_b = b % 10;

    printf("%d", digit_a + digit_b);

    return 0;
}