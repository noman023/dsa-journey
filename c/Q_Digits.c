#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);

        if (n != 0)
        {

            while (n != 0)
            {
                printf("%d ", n % 10);
                n /= 10;
            }
        }
        else
        {
            printf("%d ", n);
        }

        printf("\n");
    }

    return 0;
}