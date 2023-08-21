#include <stdio.h>
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        int result;
        result = (n * fact(n - 1));
        /*
        Mechanisim Behind
        When n==5
        For example:
        result=5*fact(4);
               5*4*fact(3);
               5*4*3*fact(2);
               5*4*3*2*fact(1);
               5*4*3*2*1;
               =120;
        */
        return result;
    }
}
int main()
{
    int x;
    printf("Enter a Number: \n");
    scanf("%d", &x);
    int result = fact(x);
    printf("Factorial of %d is: %d\n", x, result);
    return 0;
}