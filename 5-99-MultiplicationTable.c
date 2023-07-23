// Multiplication Table Using for loop

#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter Number:");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

//Multiplication Table Using While loop

/*
#include <stdio.h>
int main()
{
    int num, i=1;
    printf("Enter Number:");
    scanf("%d", &num);
    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    return 0;
}
*/