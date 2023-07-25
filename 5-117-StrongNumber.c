#include <stdio.h>
int main()
{
    int n1, temp, r, i, fact, sum = 0;
    printf("Enter a Number:\n");
    scanf("%d", &n1);
    temp = n1;
    while (temp != 0)
    {
        r = temp % 10;
        fact = 1;
        for (i = 1; i <= r; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    printf("Sum  is %d\n", sum);
    if (n1 == sum)
    {
        printf("It is a strong Number");
    }
    else
    {
        printf("it is not a strong number");
    }
    return 0;
}