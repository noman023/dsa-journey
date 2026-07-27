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

    int lowest = arr[0];
    int idx = 0;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] < lowest)
        {
            lowest = arr[j];
            idx = j;
        }
    }

    printf("%d %d\n", arr[idx], idx + 1);
    return 0;
}