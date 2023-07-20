#include<stdio.h>
int main()
{
    float radius,area;
    printf("Enter the Radius:\n");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("The area is = %.2f",area);//it will print 2 digit after the dot
    return 0;

}






// Another methode is possible
/*
#include<stdio.h>
int main()
{
    float radius,area,pi=3.14;
    printf("Enter the Radius:\n");
    scanf("%f",&radius);
    printf("%f",area=pi*radius*radius);
    return 0;
}
*/






// Circle area using the math.h header file
//M_PI is constant to call the value of pi
/*
#include<stdio.h>
#include<math.h>
int main()
{
    float radius,area;
    printf("Enter the Radius:\n");
    scanf("%f",&radius);
    printf("%f",area=M_PI*radius*radius);//M_PI gives the of pi
    return 0;
}
*/