// Number of vowels, consonants, words, digits and other
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30];
    int i, digit, vowel, consonant, words, other;
    i = digit = vowel = consonant = words = other = 0;
    printf("Enter a string: ");
    gets(str1);
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == 'a' || str1[i] == 'A' || str1[i] == 'e' || str1[i] == 'E' || str1[i] == 'i' || str1[i] == 'I' || str1[i] == 'o' || str1[i] == 'O' || str1[i] == 'u' || str1[i] == 'U')
        {
            vowel++;
        }
        else if ((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z'))
        {
            consonant++;
        }
        else if (str1[i] >= '0' && str1[i] <= '9')
        {
            digit++;
        }
        else if (str1[i] ==' ')
        {
            words++;
        }
        else
        {
            other++;
        }
    }
    printf("Number Of Vowel is :%d\n", vowel);
    printf("Number Of Consonant is :%d\n", consonant);
    printf("Number Of Digit is :%d\n", digit);
    printf("Number Of Words is :%d\n", words + 1);
    printf("Number Of Ohers is :%d\n", other);
    return 0;
}