#include <stdio.h>
int main()
{
    int i, n, sum = 0, size; // Array Declaration
    printf("Enter the array size:");
    scanf("%d", &size); // age size ta size variable e niye nisi jeta pore array er size nirdharon korbe
    int num[size];
    printf("How many numbers do you want?:");
    scanf("%d", &n);
    printf("Enter %d values:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++) // array always starts count from 0
    {
        sum = sum + num[i];
    }
    printf("Sum is: %d\n", sum);
    printf("The average is:%.2f", (float)sum / i); // Type Casting
    return 0;
}