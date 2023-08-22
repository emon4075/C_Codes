#include <stdio.h>

int main()
{
    int x = 10, y = 20;      // Declare two integer variables: x and y.
    int *ptr1, *ptr2, *temp; // Declare three pointers to integer variables.

    ptr1 = &x; // Point ptr1 to the memory address of x.
    ptr2 = &y; // Point ptr2 to the memory address of y.

    // Swapping using pointers:
    temp = ptr2; // Store the memory address that ptr2 points to in temp.
    ptr2 = ptr1; // Point ptr2 to the memory address that ptr1 points to (effectively swapping the targets).
    ptr1 = temp; // Point ptr1 to the memory address stored in temp (effectively swapping the targets).

    printf("Swapped x is = %d\n", *ptr1); // Print the value of x after swapping.
    printf("Swapped y is = %d\n", *ptr2); // Print the value of y after swapping.

    return 0;
}
