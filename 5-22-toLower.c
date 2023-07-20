// upper case to lower case using "tolower()" library function

#include<stdio.h>
int main()
{
    char low,up;
    printf("Enter a upper case:");
    scanf("%c",&up);
    low =tolower(up);
    printf("Lower case is: %c",low);
    return 0;
}