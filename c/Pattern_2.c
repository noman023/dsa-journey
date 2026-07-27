#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int numbers = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int k = numbers; k >= 1; k--)
        {
            printf("%d", k);
        }

        printf("\n");
        numbers++;
        space--;
    }

    return 0;
}