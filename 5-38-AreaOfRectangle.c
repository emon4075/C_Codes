//area of the rectangle by using float

#include<stdio.h>
int main()
{
    float length,width,area;
    printf("Enter Length and Width:\n");
    scanf("%f %f",&length ,&width);
    printf("The area is :%.3f",area=length*width);// 3 digit after dot
    return 0;
}