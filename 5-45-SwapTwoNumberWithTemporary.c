// Swap between Two Number With Temporary Variable
#include <stdio.h>
int main()
{
    int num1, num2;
    int temp; // temporary variable
    printf("Enter Number 1:\n");
    scanf("%d", &num1);
    printf("Enter Number 2:\n");
    scanf("%d", &num2);
    temp = num1; // temp has the value of num1 while num1 is empty
    num1 = num2; // now num1 has the value of num2 while num2 is empty
    num2 = temp; // now num2 has the value of temp which is ultimately the value of num1
    // this is how two numbers are swaped using a 3rd variable
    printf("Now Number 1 is:%d\n", num1);
    printf("Now Number 2 is:%d\n", num2);
    return 0;
}