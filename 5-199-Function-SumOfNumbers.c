#include <stdio.h>
// This function is for sum
int sum(int a, int b, int c)
{
    return a+b+c;
}
// This function is for substraction
int sub(int a,int b,int c)
{
    return a-b-c;
}
int main()
{
    int a,b,c;
    printf("Enter numbers: \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("The sum is : %d\n",sum(a,b,c));
    printf("Substraction is : %d",sub(a,b,c));
}
