/*

*
**
* *
*  *
*   *
*    *
*******

*/
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the range:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // Outer loop
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || i == n || i == j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}