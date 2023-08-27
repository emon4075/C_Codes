#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr;

    // Input the size of the array
    printf("Enter the array size: ");
    scanf("%d", &n);

    // Allocate memory for the array using calloc
    ptr = (int *)calloc(n, sizeof(int));

    // Input elements for the array
    for (i = 0; i < n; i++) {
        printf("Enter number at %d index: ", i);
        scanf("%d", &ptr[i]);
    }

    // Display the array elements
    printf("Array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    int new;
    printf("Number of new elements: ");
    scanf("%d", &new);

    // Reallocate memory for the array using realloc
    ptr = (int *)realloc(ptr, new * sizeof(int));

    // Input new elements for the array
    for (i = 0; i < new; i++) {
        printf("Enter number at %d index: ", i);
        scanf("%d", &ptr[i]);
    }

    // Display the new array elements
    printf("New array: ");
    for (i = 0; i < new; i++) {
        printf("%d ", ptr[i]);
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}
