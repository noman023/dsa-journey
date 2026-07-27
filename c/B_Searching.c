#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    int arr[n];

    int idx;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            idx = i;
            break;
        }
        else
        {
            idx = -1;
        }
    }

    printf("%d", idx);

    return 0;
}