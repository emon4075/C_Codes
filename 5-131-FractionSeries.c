//1 + 1/2 + 1/3 +.... + 1/ n 
#include<stdio.h>
int main()
{
    float i,n1=1,sum=0;
    int n2;
    printf("Enter the last number:");
    scanf("%d",&n2);
    printf("1 + 1/2 + 1/3 +.... + 1/ %d : ",n2);
    for ( i = 1; i <=n2; i++)
    {
        sum=sum+(n1/i);
    }
    printf("%f",sum);


    return 0;
}