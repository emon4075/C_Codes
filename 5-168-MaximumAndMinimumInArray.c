// Finding the max value

#include <stdio.h>
int main()
{
    int i, n, max, num[100];
    printf("How many numbers do you want to count?");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    max = num[0];
    for (i = 0; i < n; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }
    printf("Maximum Value is %d", max); // This logic is so cool try to concentrate
    return 0;
}



/*

// Finding the min value

#include <stdio.h>
int main()
{
    int i, n, min, num[100];
    printf("How many numbers do you want to count?");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    min = num[0];
    for (i = 0; i < n; i++)
    {
        if (min > num[i])
        {
            min = num[i];
        }
    }
    printf("Minimum Value is %d", min); // This logic is so cool try to concentrate
    return 0;
}

*/