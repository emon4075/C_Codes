#include <stdio.h>
int main()
{
    int i, j, array1[3][3], array2[3][3];

    // Matrix A


    printf("Enter array elements:\n");
    // Taking inputs from the user
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("array[%d][%d]:", i, j);
            scanf("%d", &array1[i][j]);
        }
        printf("\n"); // This new line gives attractive look
    }
    // Printing the array
    printf("A =");
    for (i = 0; i < 3; i++) // Outer loop for rows
    {
        printf("\t");           // This will take matrix right side of A=
        for (j = 0; j < 3; j++) // Inner loop for coloums
        {
            printf("%d ", array1[i][j]); // The extra space after %d makes the array attracive
        }
        printf("\n");
    }

    // Matrix-B



    printf("\n\nEnter array elements:\n");
    // Taking inputs from the user
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("array[%d][%d]:", i, j);
            scanf("%d", &array2[i][j]);
        }
        printf("\n"); // This new line gives attractive look
    }
    // Printing the array
    printf("B =");
    for (i = 0; i < 3; i++) // Outer loop for rows
    {
        printf("\t");           // This will take matrix right side of A=
        for (j = 0; j < 3; j++) // Inner loop for coloums
        {
            printf("%d ", array2[i][j]); // The extra space after %d makes the array attracive
        }
        printf("\n");
    }
    return 0;
}