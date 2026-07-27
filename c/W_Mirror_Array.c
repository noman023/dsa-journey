#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            scanf("%d", &arr[i][k]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int k = col - 1; k >= 0; k--)
        {
            printf("%d ", arr[i][k]);
        }

        printf("\n");
    }

    return 0;
}