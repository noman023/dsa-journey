#include <stdio.h>

void distinct(int arr[], int size)
{
    int distinct_arr[size];
    int len = sizeof(distinct_arr) / sizeof(distinct_arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            if (arr[i] != distinct_arr[k])
            {
                distinct_arr[i] = arr[i];
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", distinct_arr[i]);
        /* code */
    }
    // printf("%d ", len);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    distinct(arr, n);

    return 0;
}