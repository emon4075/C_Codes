#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d is a Positive Number",num);
    }
    else if (num<0)
    {
        printf("%d is a negative number",num);
    }
    else
    {
        printf("It is zero");
    }

    return 0;
}