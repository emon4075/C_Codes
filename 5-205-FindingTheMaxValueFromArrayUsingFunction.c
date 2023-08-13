#include <stdio.h>
void max(int n,int array[n])
{
    int max = array[0];
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    printf("The maximum value is: %d",max);
}
int main()
{
    int n;
    printf("Enter the range: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    max(n,array);
    return 0;
}
