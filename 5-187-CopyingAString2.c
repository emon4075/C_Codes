//Without using library function
#include<stdio.h>
#include<string.h>
int main()
{
    char st[]="Bangladesh",copy[]={};
    int i=0;
    for ( i = 0; st[i] !='\0'; i++)
    {
        copy[i]=st[i];
    }
    copy[i]='\0';
    printf("Real Text is: %s\n",st);
    printf("Copied Text is: %s",copy);
    return 0;
}