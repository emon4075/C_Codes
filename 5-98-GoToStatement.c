#include <stdio.h>
int main()
{
    int i = 0;
emon:                  // label
    printf("%d\t", i); // this will take tab
    i++;
    if (i < 5) 
    {
        goto emon; // this will take the program to label emon
    }

    return 0;
}