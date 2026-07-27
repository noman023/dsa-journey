#include <stdio.h>
#include <stdbool.h>

int main()
{
    int row, col, x;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            scanf("%d", &arr[i][k]);
        }
    }

    scanf("%d", &x);
    bool is_found = false;

    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            if (arr[i][k] == x)
            {
                is_found = true;
            }
        }
    }

    if (is_found)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}