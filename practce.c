#include <stdio.h>
int main()
{
    int x, result;
    printf("Enter a Number:");
    scanf("%d", &x);
    result = x--; // Post decrement
    printf("Result is=%d\n", result);
    printf("X is=%d\n", x);
    return 0;
}