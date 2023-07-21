/*
Relational Operators
<
>
<=
>=
== Equal
!= Not Equal
*/
// Control Statement---Conditional Control Statement,Loop Control Statement
//Conditional Control Statement----if-else,switch
#include <stdio.h>
int main()
{
    int num;
    printf("Enter an Integer:");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("%d is Even",num);
    }
    else
    {
        printf("%d is odd",num);
    }
    
    return 0;
}