#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *ptr;

    // Input the size of the array
    printf("Enter the array size: ");
    scanf("%d", &n);

    // Allocate memory for the array using calloc
    ptr = (int *)calloc(n, sizeof(int));

    // Input elements for the array
    for (i = 0; i < n; i++)
    {
        printf("Enter number at %d index: ", i);
        scanf("%d", &ptr[i]);
    }

    // Display the array elements
    printf("Array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    // Free the dynamically allocated memory
    free(ptr);

    return 0;
}
