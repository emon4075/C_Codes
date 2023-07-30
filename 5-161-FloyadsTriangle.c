/*

1
2 3
4 5 6
7 8 9 10

*/
#include <stdio.h>
int main()
{
    int i, j, k=1, n;
    printf("Enter the range:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // Outer loop
    {
        for (j = 1; j <= i; j++) // Inner loop
        {
            printf("%d ",k++);
        }
        printf("\n");
    }

    return 0;
}