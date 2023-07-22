// Vowel&Consonant Using Logical Operator
// Logical Operators
//&&---------logical and
//||----------logical or
// !-------logical not

#include <stdio.h>
int main()
{
    char letter;
    printf("Enter a charactar:\n");
    scanf("%c", &letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        printf("%c is a vowel.\n", letter);
    }
    else
    {
        printf("%c is a consonant.", letter);
    }

    return 0;
}