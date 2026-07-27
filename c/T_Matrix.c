#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            scanf("%d", &arr[i][k]);
        }
    }

    int diag1 = 0, diag2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (i == k)
            {
                // printf("%d ", arr[i][i]);
                diag1 += arr[i][k];
            }

            if ((i + k) == n - 1)
            {
                diag2 += arr[i][k];
            }
        }
    }

    printf("%d", abs(diag1 - diag2));

    return 0;
}