#include<stdio.h>
int main()
{
    int n1,r,tem,vari=0;
    printf("Enter a number:\n");
    scanf("%d",&n1);
    tem=n1;
    while (tem!=0)
    {
        r=tem%10;
        vari=vari*10+r;
        tem=tem/10;
    }
    printf("Reverse is:%d",vari);
    
    return 0;
}