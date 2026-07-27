#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int recur(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }

    int count = recur(s, i + 1);

    char v[] = "aeiouAEIOU";
    int len = strlen(v);
    bool found = false;

    for (int k = 0; k < len; k++)
    {
        if (s[i] == v[k])
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

int main()
{
    char s[201];
    fgets(s, 200, stdin);

    int value = recur(s, 0);
    printf("%d", value);
    return 0;
}