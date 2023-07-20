// sqrt is the library function in this purpose
// sq====square
// rt=====root
// sqrt ===== square Root
#include <stdio.h>
#include <math.h>
int main()
{
    double Number, Result;
    printf("Enter a Number:");
    scanf("%lf", &Number);
    Result = sqrt(Number);
    printf("The Square Root Value of the Number is= %lf", Result);
    return 0;
}