#include <stdio.h>
int main()
{
    int i, marks[5] = {20, 30, 22, 10, 77}, sum = 0; // Array Declaration
    for (i = 0; i <= 4; i++)                         // array always starts count from 0
    {
        sum = sum + marks[i];
    }
    printf("Sum is: %d\n", sum);

    return;
}