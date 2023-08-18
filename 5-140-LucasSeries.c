// Lucas series starts from 2,1,3,4 ....
#include <stdio.h>
int main()
{
    int n1 = 2, n2 = 1, n, lucas;
    printf("Enter the number range: ");
    scanf("%d", &n);
    for (int i = n1; i >= n2; i--)
    {
        printf("%d ", i);
    }
    for (int i = 2; i < n; i++)
    {
        lucas = n1 + n2;
        n1 = n2;
        n2 = lucas;
        printf("%d ", lucas);
    }
    return 0;
}