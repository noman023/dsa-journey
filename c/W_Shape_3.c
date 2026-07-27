#include <stdio.h>

int main()
{
    // diamond shape printing.
    int n;
    scanf("%d", &n);

    int space = n - 1;
    int star = 1;

    int space_two = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }

        star += 2;
        space--;
        printf("\n");
    }

    for (int i = n; i >= 1; i--)
    {
        int star_two = -1;
        for (int s = i; s >= 1; s--)
        {
            star_two += 2;
        }

        for (int j = 1; j <= space_two; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= star_two; k++)
        {
            printf("*");
        }

        space_two++;
        printf("\n");
    }

    return 0;
}