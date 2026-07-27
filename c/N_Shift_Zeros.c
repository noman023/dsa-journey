#include <stdio.h>

void shiftZeros(int arr[], int size)
{
    for (int i = 0; i <= size - 2; i++)
    {
        for (int k = i + 1; k < size; k++)
        {
            if (arr[i] == 0)
            {
                int temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
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

    shiftZeros(arr, n);

    return 0;
}