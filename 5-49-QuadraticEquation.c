#include <stdio.h>
#include<math.h>
int main()
{
    double a, b, c, D, X1, X2;
    // D---- Discriminant(Prithayok)
    // X1,X2 are the roots of the equation
    printf("Enter The values Of A,B,C:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    D = sqrt((b * b) - (4 * a * c));
    X1 = (-b + D) / 2 * a;
    X2 = (-b - D) / 2 * a;
    printf("Prithayok ba Discriminant: %lf\n", D);
    printf("Roots are :%lf %lf\n", X1, X2);
    return 0;
}