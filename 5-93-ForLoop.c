// Printing Hello World 20 times
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 20; i++)
    {
        printf("%d\t", i); // for taking a horizontal tab use \t as an escape charactar
        printf("Hello World!\n");
    }

    return 0;
}