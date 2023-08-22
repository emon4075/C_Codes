#include <stdio.h>

int main()
{
    int x = 5;  // Declare and initialize an integer variable named 'x' with the value 5.
    printf("Value of x is = %d\n", x);  // Print the value of 'x'.

    // Print the memory address of 'x' in decimal and hexadecimal formats.
    printf("Memory address of x is = %d\n", &x); 
    printf("Memory address of x is = %x\n", &x);

    int *ptr;  // Declare a pointer to an integer variable.
    ptr = &x;  // Store the memory address of 'x' in the pointer variable 'ptr'.

    // Print the memory address stored in the pointer 'ptr'.
    printf("Memory address of x is = %d\n", ptr);

    // Print the value stored at the memory address pointed to by 'ptr'.
    printf("Value stored in the pointer = %d\n", *ptr);

    // Print the memory address of the pointer variable 'ptr'.
    printf("Memory address of the pointer is = %d\n", &ptr);

    return 0;
}
