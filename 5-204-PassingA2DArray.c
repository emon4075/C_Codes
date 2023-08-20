#include <stdio.h>

void display(int row, int col, int array[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int array[row][col];

    printf("Enter array elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }

    printf("The entered array is:\n");
    display(row, col, array);

    return 0;
}

// Another Version with both input and output
/*

#include <stdio.h>
void ScanArray(int row, int col, int array[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("[%d] [%d] Index: ", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }
}
void DisplayArray(int row, int col, int array[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int row, col;
    printf("Enter rows: ");
    scanf("%d", &row);
    printf("Enter cols: ");
    scanf("%d", &col);
    int array[row][col];
    ScanArray(row, col, array);
    DisplayArray(row, col, array);
    return 0;
}

*/
