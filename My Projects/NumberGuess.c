#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n1, n2, count = 0, fail = 0;
    // Random Number Generation Section
    srand(time(0));
    n1 = rand() % 100;
    printf("You have 5 chances to guess between [0,100]!\n");
    printf("Enter 'C' to continue.\n");
    char ch;
    scanf("%c", &ch);
    printf("-------------------------------------------------\n");
    if (ch != 'C')
    {
        printf("Enter 'C' in Block Letter\n");
        printf("-------------------------------------------------\n");
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
                printf("-------------------------------------------------\n");

                // Range Section
                /*
                if (n2 >= 60 && n2 <= 70)
                {
                    printf("The Number lies between [60,70].\n");
                    printf("You have %d chances left.\n", (5 - (count + 1)));
                    printf("-------------------------------------------------\n");
                }
                */
            }
            else if (n1 < n2)
            {
                printf("Lower the value.\n");
                printf("You have %d chances left.\n", (5 - (count + 1)));
                printf("-------------------------------------------------\n");

                // Range Section
                /*
                if (n2 >= 60 && n2 <= 70)
                {
                    printf("The Number lies between [60,70].\n");
                    printf("You have %d chances left.\n", (5 - (count + 1)));
                    printf("-------------------------------------------------\n");
                }
                */
            }
            else if (n1 == n2)
            {
                printf("Congrats!!!\nYou guessed it correct!!\n");
                printf("This program is made with \'Love\' by \"Emon\" !!\n");
                printf("-------------------------------------------------\n");
                exit(0);
            }
            count++;
        }
        fail++;
        if (fail != 0)
        {
            printf("Hard Luck!\nTry Next Time :(\n");
            printf("The Number was %d (-_-) \n", n1);
            printf("This program is made with \'Love\' by \"Emon\" !!\n");
            printf("-------------------------------------------------\n");
        }
    }
    return 0;
}