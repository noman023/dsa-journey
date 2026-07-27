#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int years = n / 365;
    int remaining_days = n % 365;

    int months = remaining_days / 30;
    int days = remaining_days % 30;

    printf("%d years\n%d months\n%d days\n", years, months, days);
    return 0;
}