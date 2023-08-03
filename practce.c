#include <stdio.h>
// #define n 10// This is called macro
int main()
{
    int i, position, n = 25, value;
    int array[] = {76, 61, 53, 88, 99, 72, 59, 81, 62, 64, 52, 57, 94, 67, 71, 89, 60, 55, 83, 79, 98, 56, 77, 95, 51};
    printf("Enter a value:");
    scanf("%d", &value);
    for (i = 0; i < n; i++)
    {
        if (array[i] == value)
        {
            position = i + 1;
        }
    }
    if (position > 0)
    {
        printf("The %d is at %d position", value, position);
    }

    else
    {
        printf("Not found");
    }
    return 0;
}