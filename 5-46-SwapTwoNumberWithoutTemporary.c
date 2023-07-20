// Swap between Two Number Without Temporary Variable

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter Number 1:");
    scanf("%d", &num1);
    printf("Enter Number 2:");
    scanf("%d", &num2);
    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;
    // This concept is very important
    // Try to catch the concept
    printf("Now Number 1 is:%d\n", num1);
    printf("Now Number 2 is:%d\n", num2);
    return 0;
}