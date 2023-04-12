#include<stdio.h>
#include<string.h>

int main()
{
    char stringInput[1100];
    fgets(stringInput, 1100, stdin);
    int len=strlen(stringInput)-1;
    for (int i = 0; i < len/2; i++)  
    {
        char temp = stringInput[i];  
        stringInput[i] = stringInput[len - i - 1];  
        stringInput[len - i - 1] = temp;  
    }
    printf("%s", stringInput);
    return 0;
}