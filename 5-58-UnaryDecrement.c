//Pre Decrement
#include <stdio.h>
int main()
{
    int x, result;
    printf("Enter a Number:");
    scanf("%d", &x);
    result = --x;// pre decrement er belay input peyei value theke 1 minus korbe then eida x e store korbe ebong ei x result e store hobe
    printf("Result is=%d'\n", result);
    printf("X is=%d\n", x);
    return 0;
}

//Post decrement
/*
#include <stdio.h>
int main()
{
    int x, result;
    printf("Enter a Number:");
    scanf("%d", &x);
    result = x--; // Post decrement
    printf("Result is=%d\n", result);
    printf("X is=%d\n", x);
    return 0;
}
*/