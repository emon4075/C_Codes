//Area of a Triangle by using semi perimeter
#include<stdio.h>
#include<math.h> //sqrt er jonno dorkar porche naile error dekhay
int main()
{
    float a,b,c,s,area;
    printf("Enter 3 values:\n");
    scanf("%f %f %f", &a,&b,&c);
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area is=%.3f",area);//doshomik er pore 3 digit nichiiiii
    return 0;
}