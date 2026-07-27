#include <stdio.h>

void findMaxMin(int arr[], int size)
{
    int min = arr[0], max = arr[0];

    for (int k = 0; k < size; k++)
    {
        if (max < arr[k])
        {
            max = arr[k];
        }
        else if (min > arr[k])
        {
            min = arr[k];
        }
    }

    printf("%d %d", min, max);
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

    findMaxMin(arr, n);

    return 0;
}