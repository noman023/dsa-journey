#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int k = 0; k < n; k++)
    {
        sum += arr[k];
    }

    printf("%.0f", fabs(sum));
    return 0;
}