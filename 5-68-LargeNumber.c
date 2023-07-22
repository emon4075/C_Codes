#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter Two Numbers:\n");
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        printf("%d is Larger than %d", x, y);
    }
    else if (y > x)
    {
        printf("%d is Larger than %d", y, x);
    }
    else
    {
        printf("Numbers are Equal");
    }

    return 0;
}