#include <stdio.h>
int main()
{
    int even = 0, odd = 0, i, n, result, j;
    printf("Enter the last number:");
    scanf("%d", &n);
    printf("1-2+3-4+5-6.....%d=", n);
    for (i = 1; i <= n; i += 2)
    {
        odd = odd + i;
    }
    for (j = 2; j <= n; j += 2)
    {
        even = even + j;
    }
    result = odd - even;
    printf("%d", result);

    return 0;
}