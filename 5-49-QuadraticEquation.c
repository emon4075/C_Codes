#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, D, x1, x2;
    // D---- Discriminant(Prithayok)
    // X1,X2 are the roots of the equation
    printf("Enter The values Of A,B,C:\n");
    scanf("%f %f %f", &a, &b, &c);
    D = b * b - 4 * a * c;
    x1 = (-b + sqrt(D)) / 2 * a;
    x2 = (-b - sqrt(D)) / 2 * a;
    printf("Prithayok ba Discriminant: %f\n", D);
    printf("Roots are :%f %f\n", x1, x2);
    return 0;
}