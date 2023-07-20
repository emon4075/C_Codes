// Pre Increment
#include <stdio.h>
int main()
{
    int x, result;
    printf("Enter a Number:");
    scanf("%d", &x);
    result = ++x;//x er value agei 1 baray felbe tokhon x=x+1 ebong result=x+1 hobe
    printf("Now x is:%d\n", x);
    printf("The Result is:%d", result);
    return 0;
}

//Post Increment
/*
#include <stdio.h>
int main()
{
    int x, result;
    printf("Enter a Number:");
    scanf("%d", &x);
    result = x++;//age number ta result e print korbe then increment korbe ebong x e store korbe
    printf("Now x is:%d\n", x);
    printf("The Result is:%d", result);
    return 0;
}
*/

