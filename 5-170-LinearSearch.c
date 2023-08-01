#include <stdio.h>
int main()
{
    int num[] = {73, 48, 87, 6, 95, 15, 64, 66, 17, 40, 29, 70, 37, 97, 10, 32, 42, 7, 69, 47, 25, 30, 68, 33, 71, 34, 80, 84, 61, 46, 98, 75, 92, 26, 16, 57, 11, 65, 99, 52, 78, 81, 3, 53, 20, 85, 31, 86, 49, 67, 96, 12};
    int value, i, position = -1;
    printf("Enter the number: ");
    scanf("%d", &value);
    for (i = 0; i < 50; i++)
    {
        if (num[i] == value)
        {
            position = i + 1;
            break;
        }
    }
    if (position == -1) // Equals means ==
    {
        printf("Not Found");
    }
    else
    {
        printf("The position is at: %d", position);
    }
    return 0;
}