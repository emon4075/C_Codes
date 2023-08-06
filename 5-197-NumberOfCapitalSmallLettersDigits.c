// Number of capital-small letters, digits
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30];
    int i, capital, small, digit, special;
    i = capital = small = digit = special = 0;
    printf("Enter a string: ");
    gets(str1);
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            capital++;
        }
        else if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            small++;
        }
        else if (str1[i] >= '0' && str1[i] <= '9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }
    printf("Number of capital letters: %d\n", capital);
    printf("Number of small letters: %d\n", small);
    printf("Number of Digits: %d\n", digit);
    printf("Number of Special Characters: %d", special);
    return 0;
}