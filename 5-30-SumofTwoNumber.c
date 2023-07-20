#include<stdio.h>
int main()
{
    int num1,num2;
    float sum;
    printf("Enter two numbers:\n");
    scanf("%d %d",&num1,&num2);
    printf("The sum is=%f",sum=(float)num1+num2);//type-cast num1 
    //tobe type cast korle kintu input ager type ei nibe *****
    return 0; 
}