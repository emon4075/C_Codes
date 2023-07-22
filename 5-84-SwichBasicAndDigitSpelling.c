// switch is a conditional control statement like if else
// switch,case,break,default -----------KEYWORDS
// switch er belay default keyword ta else er moto kaj korbe

// Digit Spelling
// This program will spell the numbers 0-9
#include <stdio.h>
int main()
{
    int digit;
    printf("Enter a Number 0-9:");
    scanf("%d", &digit);
    switch (digit)
    {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight\n");
        break;
    case 9:
        printf("Nine\n");
        break;

    default:
        printf("Enter Numbera between 0-9 bsdk");
        break;
    }
    return 0;
}