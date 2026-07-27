#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++) // take input in 2D array
    {
        for (int k = 0; k < m; k++)
        {
            scanf("%d", &arr[i][k]);
        }
    }

    for (int i = 0; i < m; i++) // print last row
    {
        printf("%d ", arr[n - 1][i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) // print last column
    {
        printf("%d ", arr[i][m - 1]);
    }

    return 0;
}