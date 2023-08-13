#include <stdio.h>

double ghat(double base, double exp)
{
    double result = 1;
    for (double i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    double base, exp, result;
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponential: ");
    scanf("%lf", &exp);
    result = ghat(base, exp);
    printf("The result is: %lf", result);
    return 0;
}
