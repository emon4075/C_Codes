#include<stdio.h>
int main()
{
    float base,hieght,area;
    printf("Enter Base:\n");
    scanf("%f",&base);
    printf("Enter hieght:\n");
    scanf("%f",&hieght);
    area=0.5*base*hieght;
    printf("The area is= %f",area);
    return 0;
}