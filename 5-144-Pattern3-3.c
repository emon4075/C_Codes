/*
EEEEE
DDDD
CCC
BB
A
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
            printf("%c",64+i);// ekhane n print kora jabe na korle letter ta sob somoy ekoi thakbe
        }
        printf("\n");
    }

    return 0;
}