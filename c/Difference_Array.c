#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; i++) // copy a[] into b[]
        {
            b[i] = a[i];
        }

        for (int i = 0; i <= n - 2; i++) // selection sort to sort b[] in ascending order
        {
            for (int k = i + 1; k < n; k++)
            {
                if (b[i] > b[k])
                {
                    int temp = b[i];
                    b[i] = b[k];
                    b[k] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++) // calculate absolute value and stored in c[]
        {
            c[i] = a[i] - b[i];
        }

        for (int i = 0; i < n; i++) // print absolute value
        {
            printf("%d ", abs(c[i]));
        }

        printf("\n");
    }

    return 0;
}