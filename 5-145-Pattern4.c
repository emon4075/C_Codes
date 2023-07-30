/*
1
12
123
1234
12345
123456
1234567
123456
12345
1234
123
12
1

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
            printf("%d", j);
        }
        printf("\n");
    }
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j < i; j++) // this will remove a extra mid line
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}