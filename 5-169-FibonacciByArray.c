#include<stdio.h>
int main()
{
    int i,size,num;
    printf("Enter array size:");
    scanf("%d",&size);
    int n[size];
    printf("How many numbers do you want?");
    scanf("%d",&num);
    n[0]=0;
    n[1]=1;
    printf("Fibonacci series is: %d,%d",n[0],n[1]);
    for ( i = 2; i <num; i++)
    {
     n[i]=n[i-1]+n[i-2];
     printf(",%d",n[i]);
    }
    
    return 0;
}