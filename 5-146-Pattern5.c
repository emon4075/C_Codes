
/*
*
**
***
****
*****
******
*****
****
***
**
*

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
            printf("*");
        }
        printf("\n");
    }
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j < i; j++) // this will remove a extra mid line
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}