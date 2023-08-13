#include <stdio.h>
#include <math.h>
int main()
{
    double base, exp, result;
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponential: ");
    scanf("%lf", &exp);
    result = pow(base, exp);
    printf("The result is : %lf", result);
    return 0;
}