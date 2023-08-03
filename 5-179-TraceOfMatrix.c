#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, n2;
    printf("Enter the formation:\n");
    scanf("%d %d", &n1, &n2);
    if (n1 != n2)
    {
        printf("It is not a square matrix!\n"); // For trace the matrix must be a square matrix
        exit(0);
    }

    printf("The formation of the matrix is %d x %d \n", n1, n2);
    // Taking Input
    int i, j, mat[n1][n2], trace = 0;
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    // Printing The matrix
    printf("The matrix is:\n");
    for (i = 0; i < n1; i++)
    {
        printf("\t\t");
        for (j = 0; j < n2; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    // Process
    printf("The trace is: ");
    for (i = 0; i < n1; i++)
    {

        for (j = 0; j < n2; j++)
        {
            if (i == j)
            {
                trace = trace + mat[i][j];
            }
        }
    }
    printf(" %d ", trace);
    return 0;
}