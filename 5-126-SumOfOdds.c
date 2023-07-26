#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("Enter the last number:");
    scanf("%d", &n);
    do
    {
        sum = sum + i;
        i += 2;
    } while (i <= n);
    printf("Sum Of Odds:%d\n", sum);

    return 0;
}