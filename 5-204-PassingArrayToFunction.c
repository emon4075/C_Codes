#include <stdio.h>

void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    // printf("\n");
}

int main()
{
    int n;

    printf("Enter the array size: ");
    scanf("%d", &n);
    int array[n];
    
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("Array is: ");
    display(array, n);
    return 0;
}
