#include <stdio.h>
#include <string.h>
int main()
{
    int m, n, i, j, t;
    char s[100], str[100];
    gets(s);
    n = strlen(s);
    if (n % 2 == 0)
    {
        for (i = 0; i < n / 2 - 1; i++)
        {
            for (j = 0; j < (n / 2) - 1 - i; j++)
                if (s[j] < s[j + 1])
                {
                    t = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = t;
                }
        }
        for (i = 0; i < n / 2 - 1; i++)
        {
            for (j = 0; j < n / 2 - i - 1; j++)
            {
                if (s[j + n / 2] > s[j + 1 + n / 2])
                {
                    t = s[j + n / 2];
                    s[j + n / 2] = s[j + 1 + n / 2];
                    s[j + 1 + n / 2] = t;
                }
            }
        }
    }
    if (n % 2 != 0)
    {
        for (i = 0; i < (n / 2) - 1; i++)
        {
            for (j = 0; j < (n / 2) - 1 - i; j++)
                if (s[j] < s[j + 1])
                {
                    t = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = t;
                }
        }
        for (i = 0; i < n / 2 - 1; i++)
        {
            for (j = 0; j < n / 2 - i - 1; j++)
            {
                if (s[j + n / 2 + 1] > s[j + n / 2 + 2])
                {
                    t = s[j + n / 2 + 1];
                    s[j + n / 2 + 1] = s[j + 2 + n / 2];
                    s[j + 2 + n / 2] = t;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (n % 2 == 0)
        {
            if (i <= n / 2 - 1)
                str[i] = s[i + (n / 2)];
            if (i > n / 2 - 1)
                str[i] = s[i - (n / 2)];
        }
        if (n % 2 != 0)
        {
            if (i <= n / 2 - 1)
                str[i] = s[i + n / 2 + 1];
            if (i == n / 2)
                str[i] = s[i];
            if (i > n / 2)
                str[i] = s[i - n / 2 - 1];
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}
