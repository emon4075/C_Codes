#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year:\n");
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else if (year % 4 == 0 && year % 100 != 0) // Not equal '!='
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("This not a leap Year");
    }
    return 0;
}