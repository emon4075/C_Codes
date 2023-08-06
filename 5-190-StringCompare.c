//String compare using strcmp()

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    int d = strcmp(str1, str2); // If both strings are the same, it will store 0 in d
    // If the strings are different, it will store a non-zero value in d
    if (d == 0)
    {
        printf("Strings are same!");
    }
    else
    {
        printf("Strings are not same!");
    }
    return 0;
}
