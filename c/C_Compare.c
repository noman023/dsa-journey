#include <stdio.h>
#include <string.h>

int main()
{
    char x[21], y[21];
    scanf("%s %s", x, y);

    int len_x = strlen(x);
    int len_y = strlen(y);

    int small_string = 0;

    for (int i = 0; i < len_x < len_y ? len_x : len_y; i++)
    {
        if (x[i] < y[i])
        {
            small_string = 1;
            break;
        }
        else if (x[i] > y[i])
        {
            small_string = 0;
            break;
        }
    }

    if (small_string)
    {
        printf("%s", x);
    }
    else
    {
        printf("%s", y);
    }

    return 0;
}