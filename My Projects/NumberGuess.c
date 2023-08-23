#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1 = 53, n2, count = 0, fail = 0;
    printf("You have 5 chances to guess!\n");
    printf("Enter 'C' to continue.\n");
    char ch;
    scanf("%c", &ch);
    printf("------------------------------------\n");
    if (ch != 'C')
    {
        printf("Enter 'C' in Block Letter\n");
        printf("------------------------------------\n");
        exit(0);
    }
    else
    {
        while (count != 5)
        {
            printf("Enter your number: ");
            scanf("%d", &n2);
            if (n1 > n2)
            {
                printf("Higher the value.\n");
                printf("You have %d chances left.\n", (5 - (count + 1)));
                printf("------------------------------------\n");
            }
            else if (n1 < n2)
            {
                printf("Lower the value.\n");
                printf("You have %d chances left.\n", (5 - (count + 1)));
                printf("------------------------------------\n");
            }
            else if (n1 == n2)
            {
                printf("Congrats!!!\nYou guessed it correct!!\n");
                printf("------------------------------------\n");
                exit(0);
            }
            count++;
        }
        fail++;
        if (fail != 0)
        {
            printf("Hard Luck!\nTry Next Time :(\n");
            printf("------------------------------------\n");
        }
    }
    return 0;
}