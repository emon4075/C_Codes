// 1+2+3+4+5.......+50 = 1275

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the last Number:\n");
    scanf("%d", &n);
    printf("1+2+3+4+5.......+%d = ", n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}
// Another one 
/*
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the last Number:\n");
    scanf("%d",&n);
    printf("1+3+5.......+%d = ",n);
    for ( i = 1; i <=n; i+=2)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
Enter the last Number:
12
1+3+5.......+12 = 36


*/