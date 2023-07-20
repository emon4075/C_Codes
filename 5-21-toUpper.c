//lower case to upper using "toupper()" library function

#include<stdio.h>
int main()
{
    char low,up;
    printf("Enter a lower case:");
    scanf("%c",&low);
    up =toupper(low);
    printf("Upper case is: %c",up);
    return 0;
}