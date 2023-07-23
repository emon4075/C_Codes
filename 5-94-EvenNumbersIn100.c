//1-100 porjonto even number gula print korte hobe 
// By using For,While,Do-While
#include<stdio.h>
int main()
{
    int i=2;
    do
    {
        printf("%d\n",i);
        i=i+2;
    } while (i<=100);
    
    return 0;
}


// Using For Loop
/*
#include <stdio.h>
int main()
{
    int i;
    for ( i = 2; i <=100; i=i+2)
    {
        printf("%d\n",i);
    }
    
    return 0;
}
*/

// Using While Loop
/*
#include <stdio.h>
int main()
{
    int i=2;
    while (i<=100)
    {
        printf("%d\n",i);
        i=i+2;
    }
    
    return 0;
}
*/