//LOWER case to Upper case without librabry function

#include<stdio.h>
int main()
{
    char lower;
    printf("Enter a lower case:");
    scanf("%c",&lower);
    printf("Upper case is: %c",lower-32);
    return 0;
}