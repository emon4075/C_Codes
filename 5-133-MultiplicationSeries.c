// 1 X 2 X 3 X.... X n
#include<stdio.h>
int main()
{
    int i=1,n;
    long long int sum=1;// sum onek boro asbe tai long long int nichi 
    // format specifier of long long int is %lld
    printf("Enter the last value:");
    scanf("%d",&n);
    printf("1 X 2 X 3 X.... X %d:",n);
    for ( i = 1; i <=n; i++)
    {
        sum=sum*i;
    }
    printf("%lld",sum);
    return 0;
}
