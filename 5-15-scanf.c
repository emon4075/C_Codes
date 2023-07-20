//This program will take a input and print that in output
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two int value:");
    scanf("%i %i", &a,&b);
    //balpaknami with if condition
    if (a==b)
    {
        printf("You entered same value and it is:%i",a);
    }
    else{
        printf("The numbers are: %i,%i",a,b);
    }
    
    return 0;
}