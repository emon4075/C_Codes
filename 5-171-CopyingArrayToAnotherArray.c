#include <stdio.h>
int main()
{
    int i, num;
    printf("Enter the array size & numbers quantity:");
    printf("\n***************************************\n");
    scanf("%d", &num);
    int array1[num], array2[num];
    printf("Now Enter Numbers:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("***************************************\n");
    printf("Array-1 is:");
    for (i = 0; i < num; i++)
    {
        printf("%d ", array1[i]);
    }
    for (i = 0; i < num; i++)
    {
        array2[i] = array1[i];
    }
    printf("\nArray-2 is:");
    for (i = 0; i < num; i++)
    {
        printf("%d ", array2[i]);
    }

    return 0;
}