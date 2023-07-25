#include<stdio.h>
int main()
{
    int n1,count=0;
    printf("Enter a Number:\n");
    scanf("%d",&n1);
    while (n1!=0)
    {
        n1=n1/10;
        ++count;
    }
    printf("There are %d digits.",count);
    return 0;
}