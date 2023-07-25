#include <stdio.h>
int main()
{
    int n1, n2, rem, num1, num2;
    float LCD, GCD;
    printf("Enter two numbers:\n");
    scanf("%d %d", &n1, &n2);
    num1 = n1;
    num2 = n2;
    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    GCD = n1;
    LCD = (num1 * num2) / GCD;
    printf("GCD is %f\n", GCD);
    printf("LCD is %f", LCD);
    return 0;
}