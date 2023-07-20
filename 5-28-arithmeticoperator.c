//Finding the value of sum and average by using type casting
//What is typecasting?
//-----Type casting is the process of changing the variable types
#include<stdio.h>
int main()
{
    int n1,n2,sum;
    printf("Enter Two Numbers:\n");
    scanf("%d %d",&n1,&n2);
    printf("The sum is= %d\n",sum=n1+n2);
    float avg;
    avg=(float)sum/2;   //Type casted of the variable sum integer to float sothat the avg gets the right value
    printf("The average is=%.2f",avg);
    return 0;
}