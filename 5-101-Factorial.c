#include <stdio.h>
int main()
{
    int fact=1,i,n;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial Is:%d",fact);
    return 0;
}