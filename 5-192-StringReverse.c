// String reverse without strrev()
#include <stdio.h>
int main()
{
    char str1[30] = "Abdullah Emon";
    char str2[30];
    int i = 0, j = 0, len = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        len++;
    }
    for (j = 0, i = len - 1; i >= 0; i--, j++)
    {
        str2[j] = str1[i];
    }
    str2[j] = '\0';
    printf("Reversed String is: %s\n", str2);
    return 0;
}