#include <stdio.h>

int main()
{
    int x = 10, y = 20, z = 30; // Declare three integer variables: x, y, and z, and assign them values.
    int *ptr;                   // Declare a pointer to an integer variable.

    ptr = &x;                                 // Point the pointer 'ptr' to the memory address of variable 'x'.
    printf("The value of x is = %d\n", *ptr); // Print the value stored at the memory address pointed to by 'ptr' (which is 'x').

    ptr = &y;                                 // Point the pointer 'ptr' to the memory address of variable 'y'.
    printf("The value of y is = %d\n", *ptr); // Print the value stored at the memory address pointed to by 'ptr' (which is 'y').

    ptr = &z;                                 // Point the pointer 'ptr' to the memory address of variable 'z'.
    printf("The value of z is = %d\n", *ptr); // Print the value stored at the memory address pointed to by 'ptr' (which is 'z').

    return 0;
}
