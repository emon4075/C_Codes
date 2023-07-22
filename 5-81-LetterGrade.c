#include <stdio.h>
int main()
{
    int num;
    // pass mark 60
    printf("Enter Number:\n");
    scanf("%d", &num);
    if (num < 0 || num > 100)
    {
        printf("Halar Put Number Thik koira input de");
    }
    else if (num >= 80)
    {
        printf("A+");
    }
    else if (num >= 70)
    {
        printf("A");
    }
    else if (num >= 65)
    {
        printf("A-");
    }
    else if (num >= 60)
    {
        printf("B");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}