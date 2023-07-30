
/*

       *
      **
     ***
    ****
   *****
  ******
 *******
********

*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the range:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");// space =n-row
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}