#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, power;
    printf("Enter x & y :\n");
    scanf("%lf %lf", &x, &y);
    power = pow(x, y);
    printf("The value of x to the power y is=%lf", power);
    return 0;
}