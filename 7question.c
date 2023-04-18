#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char str1[100], str2[100], str_rem[100];
    int i = 0, j = 0, k = 0;

    printf ("Enter the First string:\n");
    gets (str1);

    printf ("Enter the Second string:\n");
    gets (str2);

    for (i = 0; str1[i]!= '\0'; i++)
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                continue;
            }
            else
            {
                str_rem[k] = str2[j];
                k++;
            }
        }

        str_rem[k] = '\0';
        for (j = 0; str_rem[j] != '\0'; j++)
        {
            str2[j] = str_rem[j];
        }
        str2[j] = '\0';

        k = 0;
    }

    printf ("On removing characters from second string we get: %s\n", str_rem);
    return 0;
}
