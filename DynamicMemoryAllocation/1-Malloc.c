#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare a pointer to int to store array address
    int *ptr;

    // Declare a variable to store the array size
    int n;

    // Input the size of the array from the user
    printf("Enter the array size: ");
    scanf("%d", &n);

    // Allocate memory for the array using malloc
    ptr = (int *)malloc(n * sizeof(int));

    // Input elements for the array
    for (int i = 0; i < n; i++)
    {
        printf("Enter number at %d index: ", i);
        scanf("%d", &ptr[i]);
    }

    // Display the array elements
    printf("Array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    // Free the dynamically allocated memory to prevent memory leaks
    free(ptr);

    return 0;
}
