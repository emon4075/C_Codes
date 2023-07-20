// For more see "AssignmentOperator.png"
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter a number:");
    scanf("%d", &x);
    x += 5; // x=x+5;
    printf("The new number is:%d", x);
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    x%=5;// x=x%5
    printf("The new number is:%d",x);
    return 0;
}
*/


/*
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    x/=5;// x=x/5
    printf("The new number is:%d",x);
    return 0;
}
*/