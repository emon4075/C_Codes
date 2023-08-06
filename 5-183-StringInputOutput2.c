#include <stdio.h>
int main()
{
    char st[30];
    printf("Enter your name:");
    //scanf("%s", &st);
    gets(st); // This gets() function will help us to take input the full name with space as an alternative of scanf
    printf("Your name is : %s\n", st);
    return 0;
}