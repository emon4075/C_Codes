
/*

    *
   * *
  * * *
 * * * *
* * * * *

*/
// This pyramid is different from previous ones

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the range:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++) // prints the spaces
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* "); // prints stars with a extra space to solve the pyramid
        }
        printf("\n");
    }

    return 0;
}