#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    if (r == c) // check if matrix is square
    {
        for (int i = 0; i < r; i++) // take input in 2D array
        {
            for (int k = 0; k < r; k++)
            {
                scanf("%d", &arr[i][k]);
            }
        }

        bool is_diagonal = true;
        for (int i = 0; i < r; i++) // check if matrix is diagonal
        {
            for (int k = 0; k < r; k++)
            {
                if (i != k && (i + k) != r - 1) // outside 1st & 2nd diagonal
                {
                    if (arr[i][k] > 0)
                    {
                        is_diagonal = false;
                    }
                }
            }
        }

        if (is_diagonal)
        {
            bool is_jadu_matrix = true;

            for (int i = 0; i < r; i++) // check if all values are 1
            {
                for (int k = 0; k < r; k++)
                {
                    if (i == k || (i + k) == r - 1) // inside 1st or 2nd diagonal
                    {
                        if (arr[i][k] != 1)
                        {
                            is_jadu_matrix = false;
                        }
                    }
                }
            }

            if (is_jadu_matrix)
            {
                printf("YES");
            }
            else
            {
                printf("NO");
            }
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }

    return 0;
}