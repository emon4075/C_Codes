// Using strcpy() library function
#include<stdio.h>
#include<string.h>
int main()
{
    char st[]={},copy[]={};
    printf("Enter your text: ");
    gets(st);
    printf("Real Text is: %s\n",st);
    strcpy(copy,st);
    printf("Copied Text is: %s",copy);
    return 0;
}