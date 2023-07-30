/*

ABCDE
ABCDE
ABCDE
ABCDE
ABCDE

*/
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the range:");
    scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j<=n; j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
    
    return 0;
}