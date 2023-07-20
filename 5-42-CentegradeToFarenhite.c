#include<stdio.h>
int main()
{
    float centi,faren;
    printf("Enter the centegrade value: \n");
    scanf("%f",&centi);
    faren=((9*centi)/5)+32;
    printf("Farenhite value is: %.2f",faren); // this will print 2 digit after the dot!
    return 0;
}