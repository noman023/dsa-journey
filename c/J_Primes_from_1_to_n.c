#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        bool is_prime = true;

        for (int k = 2; k < i; k++)
        {

            if (i % k == 0)
            {
                is_prime = false;
            }
        }

        if (is_prime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}