#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int copy_n = n;
    int reverse = 0;

    while (copy_n != 0)
    {
        int last_digit = copy_n % 10;
        reverse = reverse * 10 + last_digit;
        copy_n /= 10;
    }

    if (n == reverse)
    {

        printf("%d\n", reverse);
        printf("YES");
    }
    else
    {
        printf("%d\n", reverse);
        printf("NO");
    }

    return 0;
}