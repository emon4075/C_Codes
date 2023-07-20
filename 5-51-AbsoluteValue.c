// printing the absolute value(poromman) of a number
#include <stdio.h>
#include <math.h>
int main()
{
    int input,result;
    printf("Enter A Number:");
    scanf("%d", &input);
    result = abs(input); // abs means absolute which is a library function
    printf("Absolute value is = %d", result);
    return 0;
}