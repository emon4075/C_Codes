#include <stdio.h>
int main()
{
    int i, j, array[3][3];
    printf("Enter array elements:\n");
    // Taking inputs from the user
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("array[%d][%d]:",i,j);
            scanf("%d", &array[i][j]);
        }
        printf("\n"); //This new line gives attractive look
    }
    // Printing the array
    printf("The 2D array is:\n");
    for (i = 0; i < 3; i++) // Outer loop for rows
    {
        for (j = 0; j < 3; j++) // Inner loop for coloums
        {
            printf("%d ", array[i][j]); // The extra space after %d makes the array attracive
        }
        printf("\n");
    }
    return 0;
}