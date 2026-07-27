#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int len = strlen(s);
    int flag = 1;

    for (int i = 0, k = len - 1; i < k; i++, k--)
    {
        if (s[i] != s[k])
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main()
{
    char s[1001];
    scanf("%s", s);

    int value = is_palindrome(s);

    if (value == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}