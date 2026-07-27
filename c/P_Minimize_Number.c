#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int op_count = 0;
    bool is_odd = false;

    while (true)
    {
        for (int k = 0; k < n; k++)
        {
            if (arr[k] % 2 == 0)
            {
                arr[k] = arr[k] / 2;
            }
            else
            {
                is_odd = true;
                break;
            }
        }

        if (!is_odd)
        {
            op_count++;
        }
        else
        {
            break;
        }
    }

    printf("%d", op_count);

    return 0;
}