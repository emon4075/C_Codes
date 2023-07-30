
/*

1
2 4
3 6 9
4 8 12 16

*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the range:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}