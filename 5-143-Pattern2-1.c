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
    printf("Enter the last number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // outer loop for row
    {
        for ( j = 1; j<=i; j++)
        {
            printf("%c",j+64);// coverting j to ascii to print abcde
        }
        printf("\n");
    }

    return 0;
}