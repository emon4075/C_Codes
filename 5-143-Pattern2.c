/*
1
10
101
1010
10101
*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the last number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // outer loop for row
    {
        for (j = 1; j <= i; j++) // inner loop for coloumn
        {
            if (j % 2 == 0) // this is for even numbers
            {
                printf("0"); // if the number is even then it would print 0
            }
            else
            {
                printf("1"); // otherwise it will print 1
            }
        }
        printf("\n");
    }

    return 0;
}