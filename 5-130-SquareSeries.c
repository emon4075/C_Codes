//1^2 + 2^2 +....+ n^2
#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter the last value:");
    scanf("%d",&n);
    printf("1^2 + 2^2 +....+ %d^2 : ",n);
    while (i<=n)
    {
        sum=sum+(i*i);
        i++;
    }
    printf("%d",sum);
    return 0;
}