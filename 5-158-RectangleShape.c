/*

*****
*   *
*   *
*   *
*****

*/
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the range:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)// Outer loop
    {
        for (j = 1; j <= n; j++) // Inner loop
        {
            if (i == 1 || j == 1 || i == n || j == n) // Concept ta bujhar try koro
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