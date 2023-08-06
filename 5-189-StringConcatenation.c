#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "My Name is ";
    char str2[] = "Abdullah Emon";
    int i = 0, j = 0, len = 0;

    // Find the length of str1
    for (i = 0; str1[i] != '\0'; i++)
    {
        len++;
    }

    // Concatenate str2 to str1
    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[len + j] = str2[j];
    }

    // Add the null-terminator to the end of the concatenated string
    str1[len + j] = '\0';

    printf("String-1 is: %s\n", str1);
    return 0;
}
