// Vowel and consonant using if,else if,else condition
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a letter:\n");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'A')
    {
        printf("It is a Vowel");
    }
    else if (ch == 'e' || ch == 'E')
    {
        printf("It is a Vowel");
    }

    else if (ch == 'i' || ch == 'I')
    {
        printf("It is a Vowel");
    }
    else if (ch == 'e' || ch == 'E')
    {
        printf("It is a Vowel");
    }
    else if (ch == 'u' || ch == 'U')
    {
        printf("It is a Vowel");
    }
    else if (ch == 'o' || ch == 'O')
    {
        printf("It is a Vowel");
    }
    else
    {
        printf("It is a consonant");
    }
    return 0;
}