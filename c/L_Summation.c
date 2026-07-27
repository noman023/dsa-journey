#include <stdio.h>

long long sum(int arr[], int n)
{
    if (n == 0)
    {
        return arr[n];
    }

    long long value = sum(arr, n - 1);

    return value += arr[n];
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

    long long total = sum(arr, n - 1);
    printf("%lld", total);

    return 0;
}