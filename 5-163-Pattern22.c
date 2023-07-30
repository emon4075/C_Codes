/*
1234321
 12321
  121
   1
This took around one hour to solve
*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the range:");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}