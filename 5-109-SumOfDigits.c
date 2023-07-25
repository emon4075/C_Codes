#include<stdio.h>
int main()
{
    int sum=0,n1,r,p,temp;
    printf("Enter a number:\n");
    scanf("%d",&n1);
    temp=n1;
    while (temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        p=temp/10;
        temp=p;
    }
    printf("Sum is=%d",sum);
    
    return 0;
}