#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int lines_to_print = (n + 11) / 2;
    int space = (n + 9) / 2;
    int star = 1;

    for (int i = 1; i <= lines_to_print; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }

        printf("\n");
        star += 2;
        space--;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= n; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}