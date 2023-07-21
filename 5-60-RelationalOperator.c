// Comparing Two Numbers

#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter Number 1:");
    scanf("%i", &n1);
    printf("Enter Number 2:");
    scanf("%i", &n2);
    if (n1 > n2)
    {
        printf("%d is Greater than %d", n1, n2);
    }
    else if (n1 < n2)
    {
        printf("%d is Greater %d", n2, n1);
    }
    else
    {
        printf("Numbers are equal.");
    }
    return 0;
}