#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is Even",num);
    }
    else
    {
        printf("%d is odd",num);
    }
    return 0;
}