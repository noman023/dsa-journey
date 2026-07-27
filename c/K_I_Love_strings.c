#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char str1[51], str2[51];
        scanf("%s %s", str1, str2);

        int str1_len = strlen(str1);
        int str2_len = strlen(str2);
        int total_len = str1_len + str2_len;

        char str3[total_len + 1];

        bool is_str1_small = str1_len < str2_len;

        for (int i = 0; i < total_len; i++)
        {
            if ((is_str1_small && i < str1_len * 2) || (!is_str1_small && i < str2_len * 2))
            {

                if (i % 2 == 0)
                {
                    int idx_str1 = i * 0.5;
                    str3[i] = str1[idx_str1];
                }
                else
                {
                    int idx_str2 = i / 2;
                    str3[i] = str2[idx_str2];
                }
            }
            else
            {
                if (is_str1_small)
                {
                    str3[i] = str2[i - str1_len];
                }
                else
                {
                    str3[i] = str1[i - str2_len];
                }
            }
        }

        str3[total_len] = '\0';
        printf("%s\n", str3);
    }
}