#include <stdio.h>

int main()
{
    int x = 10, y = 20, sum;  // Declare two integer variables: x, y and a variable to store the sum.
    int *ptr1, *ptr2;  // Declare two pointers to integer variables.
    
    ptr1 = &x;  // Point the first pointer 'ptr1' to the memory address of variable 'x'.
    ptr2 = &y;  // Point the second pointer 'ptr2' to the memory address of variable 'y'.

    // Access the values stored at the memory addresses pointed to by 'ptr1' and 'ptr2',
    // and calculate their sum, then store it in the 'sum' variable.
    sum = *ptr1 + *ptr2;

    printf("The sum is = %d\n", sum);  // Print the calculated sum.

    return 0;
}
