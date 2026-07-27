#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= n - 2; i++) // selection sort
    {
        for (int k = i + 1; k < n; k++)
        {
            if (arr[i] > arr[k])
            {
                int temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
