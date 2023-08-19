#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter The Formation of matrix: \n");
    scanf("%d %d", &n1, &n2);
    printf("Transpose formation will be %d x %d \n", n2, n1);
    int i, j, mat1[n1][n2], mat2[n2][n1];
    // Taking The input
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("Matrix %d x %d = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
        printf("\n");
    }
    // Printing The matrix
    printf("The Following Matrix is:\n");
    for (i = 0; i < n1; i++)
    {
        printf("\t\t\t");
        for (j = 0; j < n2; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    // Priting The Transpose One
    printf("The Transpose Matrix will be:\n");
    for (i = 0; i < n2; i++)
    {
        printf("\t\t\t");
        for (j = 0; j < n1; j++)
        {
            mat2[i][j] = mat1[j][i];
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}