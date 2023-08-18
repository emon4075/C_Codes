/*

***********
**       **
* *     * *
*  *   *  *
*   * *   *
*    *    *
*   * *   *
*  *   *  *
* *     * *
**       **
***********

*/
// // If we give an even number as an input it will be distorted x shape
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the last digit: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1 || i == 1 || j == 1 || i == n || j == n)
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