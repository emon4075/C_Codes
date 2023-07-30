/*

10101
1010
101
10
1

*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the last number:");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}