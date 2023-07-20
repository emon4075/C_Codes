#include<stdio.h>
int main()
{
    int num1=10,num2=20;    
    printf("Numbers are %d,%d\n", num1,num2);
    //printing a float number
    float a= 10.20;
    printf("Float Number is %f\n",a);
    printf("Float Number is %.3f\n",a);//This will print 3 digit after dot
    //printing a character
    // char takes only a single word
    char c='E';
    printf("Charactar  is %c\n",c);
    return 0;
}