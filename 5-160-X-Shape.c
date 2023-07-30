/*

*   *
 * *
  *
 * *
*   *

*/
// If we give an even number as an input it will be distorted x shape
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the range:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)// Outer loop
    {
        for ( j= 1; j <=n; j++)
        {
            if (i==j|| i+j==n+1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}