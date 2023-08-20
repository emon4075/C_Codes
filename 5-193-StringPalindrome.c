// A string is called a palindrome string if the reverse of that string is the same as the original string. For example, radar , level , etc
#include <stdio.h>
#include<string.h>
int main()
{
    char str1[30];
    char str2[30];
    printf("Enter a text: ");
    gets(str1);
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
    // String compare
    int d=strcmp(str1,str2);
    if (d==0)
    {
        printf("Palindrome!");
    }
    else
    {
        printf("Not a palindorme");
    }
    return 0;
}

// Alternative Program
/*

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);
    printf("Real String Is: %s\n", str);
    char copy[100];
    strcpy(copy, str);

    strrev(copy);
    printf("Reversed Text Is: %s\n", copy);

    if (strcmp(str, copy) == 0)
    {
        printf("It is a Palindrome string.\n");
    }
    else
    {
        printf("It is not a Palindrome string.\n");
    }

    return 0;
}


*/