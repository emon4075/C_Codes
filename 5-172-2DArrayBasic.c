#include <stdio.h>
int main()
{
    int i, j, array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Declaring 2d array
    // Priting the 2d array
    for (i = 0; i < 3; i++) // Outer loop for rows
    {
        for (j = 0; j < 3; j++) // Inner loop for coloums
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}