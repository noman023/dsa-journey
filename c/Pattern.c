#include <stdio.h>

int main()
{
    // diamond shape printing.
    int n;
    scanf("%d", &n);

    int space = n - 1;
    int hash = 1;

    int space_two = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= hash; k++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {

                printf("#");
            }
        }

        hash += 2;
        space--;
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--)
    {
        int hash_two = -1;
        for (int s = i; s >= 1; s--)
        {
            hash_two += 2;
        }

        for (int j = 1; j <= space_two; j++)
        {

            printf(" ");
        }

        for (int k = 1; k <= hash_two; k++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {

                printf("#");
            }
        }

        space_two++;
        printf("\n");
    }

    return 0;
}