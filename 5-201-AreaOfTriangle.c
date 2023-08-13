#include <stdio.h>
float TriangleArea(float b, float h)
{
    return 0.5 * b * h;
}
int main()
{
    float base, hieght;
    printf("Enter the base:");
    scanf("%f", &base);
    printf("Enter the hieght:");
    scanf("%f", &hieght);
    float result = TriangleArea(base, hieght);
    printf("The area of the triangle is: %.3f", result);
}