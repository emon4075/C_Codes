#include <stdio.h>
#include <stdlib.h> // header file for exit(0); function
int main()
{
    int n1, n2, n3, n4;
    printf("Enter the formation of Matrix-1:\n");
    scanf("%d %d", &n1, &n2);
    printf("Enter the formation of Matrix-2:\n");
    scanf("%d %d", &n3, &n4);
    if (n2 == n3)
    {
        printf("Matrix-1 is %d x %d", n1, n2);
        printf("\nMatrix-2 is %d x %d", n3, n4);
    }
    else
    {
        printf("Multiplication is not Possible");
        exit(0);
    }
    int i, j,k, mat1[n1][n2], mat2[n3][n4], res[n1][n4];

    //------------Start Of User Input Section---------------------
    // Getting mat1

    printf("\nEnter matrix elements:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("Matrix-1[%d][%d]:", i, j);
            scanf("%d", &mat1[i][j]);
        }
        printf("\n");
    }

    // Getting mat2

    printf("\nEnter matrix elements:\n");
    for (i = 0; i < n3; i++)
    {
        for (j = 0; j < n4; j++)
        {
            printf("Matrix-2[%d][%d]:", i, j);
            scanf("%d", &mat2[i][j]);
        }
        printf("\n");
    }
    //------------End Of User Input Section---------------------
    //------------Start of Printing Section ---------------------

    // Priting Matrix-1
    printf("Matrix-1:\n");
    for (i = 0; i < n1; i++) // Outer loop for rows
    {
        printf("\t");
        for (j = 0; j < n2; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    // Printing Matrix-2
    printf("Matrix-2:\n");
    for (i = 0; i < n3; i++) // Outer loop for rows
    {
        printf("\t");
        for (j = 0; j < n4; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    //------------End of Printing Section ---------------------
    //-----------Muliplication Processing---------------------
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n4; j++)
        {
            res[i][j] = 0;
            for ( k = 0; k < n2; k++) // This loop does the summation
            {
                res[i][j] = res[i][j] + mat1[i][k] * mat2[k][j];
            }
        }
    }
    // -----------Printing the result--------------------------
    printf("Multiplication of the matrices is:\n");
    for (i = 0; i < n1; i++)
    {
        printf("\t");
        for (j = 0; j < n4; j++)
        {
            printf("%d", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}