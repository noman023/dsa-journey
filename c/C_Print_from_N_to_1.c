#include <stdio.h>

void print_to_n(int n)
{
    if (n == 0)
    {
        return;
    }

    if (n == 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d ", n);
    }

    print_to_n(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    print_to_n(n);
    return 0;
}