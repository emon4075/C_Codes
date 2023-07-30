
/*

    A
   AB
  ABC
 ABCD
ABCDE

*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the range:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)// loop for space
        {
            printf(" ");// space =n-row
        }
        for (j = 1; j <= i; j++) // loop for printing value
        {
            printf("%c",j+64);
        }
        printf("\n");
    }

    return 0;
}