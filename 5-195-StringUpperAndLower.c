#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30];
    printf("--------Upper Convertion--------\n");
    printf("Enter the string:");
    gets(str1);
    strupr(str1);
    printf("String in uppercase: %s\n", str1);
    printf("--------Lower Convertion--------\n");
    strlwr(str1);
    printf("String in lowercase: %s", str1);
    return 0;
}