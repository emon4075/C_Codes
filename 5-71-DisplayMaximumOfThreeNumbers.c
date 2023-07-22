// Using Logical and operator

#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter Three Numbers:\n");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && x > z)
    {
        printf("%d is the max value", x);
    }
    else if (y > x && y > z)
    {
        printf("%d is the max value", y);
    }
    else if (z>x && z>y)
    {
        printf("%d is the max value", z);
    }
    
    else
    {
        printf("Numbers are equal");
    }

    return 0;
}