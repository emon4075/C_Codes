// A program to find whether it is a small or capital letter
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a charactar:\n");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a Capital Letter",ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a small letter",ch);
    }
    else
    {
        printf("Oi fazil er baccha right letter input de");
    }

    return 0;
}