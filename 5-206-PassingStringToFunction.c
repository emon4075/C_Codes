#include<stdio.h>
void display(char string[100])
{
    printf("Entered string is: %s",string);
}
int main()
{
    char string[100];
    printf("Enter a string: ");
    gets(string);
    display(string);
    return 0;
}
