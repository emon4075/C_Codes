#include <stdio.h>
int main()
{
    int i = 0, first = 0, second = 1, fibo, n;
    printf("Enter the last number:");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        if (i <= 1)
        {
            printf("%d,", i);
        }
        else if (i == n) // This will help me not to print comma at the last of the series
        // 0,1,1,2,3,5,8,13,21,34,55
        {
            fibo = first + second;
            first = second;
            second = fibo;
            printf("%d", fibo);
        }

        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
            printf("%d,", fibo);
        }
    }
    return 0;
}