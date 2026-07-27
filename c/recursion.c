#include <stdio.h>

void print_indices(int n, int arr[])
{
    if (n == -1)
        return;

    if (n % 2 == 0)
    {
        printf("%d ", arr[n]);
    }

    print_indices(n - 1, arr);
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

    print_indices(n - 1, arr);
    return 0;
}