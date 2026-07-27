#include <stdio.h>

int recur(int a[], int size)
{
    if (size == 0)
    {
        return a[0];
    }

    int value = recur(a, size - 1);

    if (a[size] > value)
    {
        return a[size];
    }
    else
    {
        return value;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("%d", recur(a, n - 1));

    return 0;
}