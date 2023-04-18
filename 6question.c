//Concatenate_String

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str1 = (char)malloc(sizeof(char));
    char str2 = (char)malloc(sizeof(char));
    printf("Enter string1\n");
    scanf("%[^\n]%*c", str1);
     printf("Enter string2\n");
    scanf("%[^\n]%*c", str2);

    int j = strlen(str1);
    str1[j++] = ' ';

    for( int i=0;i<strlen(str2);i++)
    {
        str1[j++] = str2[i];
    }
    printf("Concatenated string: %s\n", str1);
    return 0;
}
