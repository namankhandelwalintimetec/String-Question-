#include <stdio.h>
#include <string.h>

int checkPangram(char str[])
{
    int mark[26];
    int index;
    for (int i = 0; i < 26; i++)
        mark[i] = 0;

    int size = strlen(str);
    for (int i = 0; i < size; i++)
    {

        if ('a' <= str[i] && str[i] <= 'z')
            index = str[i] - 'a';

        else if ('A' <= str[i] && str[i] <= 'Z')
            index = str[i] - 'A';

        else
            continue;

        mark[index] = 1;
    }

    for (int i = 0; i <= 25; i++)
        if (mark[i] == 0)
            return 0;

    return 1;
}

int main()
{
    char str[] = "The quick brown fox jumps over the lazy dog";
    if (checkPangram(str) == 1)
        printf(" %s \nis a pangram", str);
    else
        printf(" %s \nis not a pangram", str);
    return 0;
}