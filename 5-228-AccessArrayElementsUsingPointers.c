#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50}; // Declare and initialize an integer array.
    int *ptr;                             // Declare a pointer to an integer variable.

    ptr = numbers; // Point the pointer to the start of the array.

    // Access and print array elements using pointer arithmetic.
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, *(ptr + i)); // Use pointer arithmetic to access elements.
        // So, during the first iteration (i = 0), *(ptr + i) is equivalent to *(numbers + 0) which is the same as numbers[0], giving you the first element of the array.
    }

    return 0;
}
