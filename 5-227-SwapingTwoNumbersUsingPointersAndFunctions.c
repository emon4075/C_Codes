#include <stdio.h>

void Swap(int *ptr1, int *ptr2)
{
    // Swapping using pointers:
    int temp = *ptr2; // Store the value that ptr2 points to in temp.
    *ptr2 = *ptr1;    // Assign the value that ptr1 points to to ptr2.
    *ptr1 = temp;     // Assign the stored value from temp to ptr1.
}

int main()
{
    int x = 10, y = 20;
    printf("Before Swapping: x = %d and y = %d\n", x, y);

    // Call the Swap function and pass pointers to x and y.
    Swap(&x, &y);

    printf("After Swapping: x = %d and y = %d\n", x, y);
    return 0;
}
