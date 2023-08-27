#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // Intro Section
    printf("\t\t\t\t*****************ROCK-PAPER-SCISSOR GAME*****************\n");
    printf("\t\t\t\tDISCLAIMER: \n");
    printf("\t\t\t\t-----------\n");
    printf("\t\t\t\t1.Choose 'R' for Rock.\n");
    printf("\t\t\t\t2.Choose 'P' for Paper.\n");
    printf("\t\t\t\t3.Choose 'S' for Scissor.\n");
    printf("\t\t\t\t4.There will be 3 matches! (You Vs Computer)\n");
    int i = 0, Person = 0, Computer = 0;
    while (i < 3)
    {
        // Random Value Generation
        srand(time(0));
        int N1, N2;
        N1 = rand() % 3;
        printf("\t\t\t\t--------------\n");
        printf("\t\t\t\t|  Round %d:  |\n", i + 1);
        printf("\t\t\t\t--------------\n");
        // Taking Inputs
        char ch;
        printf("\t\t\t\tEnter Your Choice: ");
        scanf(" %c", &ch);
        if (ch == 'R')
        {
            N2 = 0;
        }
        else if (ch == 'P')
        {
            N2 = 1;
        }
        else if (ch == 'S')
        {
            N2 = 2;
        }
        else
        {
            printf("\t\t\t\tInvalid Input\n");
            exit(0);
        }
        if (N1 == 0 && N2 == 2)
        {
            printf("\t\t\t\tYou choose Scissor.\n");
            printf("\t\t\t\tComputer choose Rock.\n");
            printf("\t\t\t\tComputer Wins Round %d\n", i + 1);
            Computer++;
        }
        else if (N1 == 2 && N2 == 0)
        {
            printf("\t\t\t\tComputer choose Scissor.\n");
            printf("\t\t\t\tYou choose Rock.\n");
            printf("\t\t\t\tYou Win Round %d\n", i + 1);
            Person++;
        }
        else if (N1 == 1 && N2 == 0)
        {
            printf("\t\t\t\tYou choose Rock.\n");
            printf("\t\t\t\tComputer choose Paper.\n");
            printf("\t\t\t\tComputer Wins Round %d\n", i + 1);
            Computer++;
        }
        else if (N1 == 0 && N2 == 1)
        {
            printf("\t\t\t\tComputer choose Rock.\n");
            printf("\t\t\t\tYou choose Paper.\n");
            printf("\t\t\t\tYou Win Round %d\n", i + 1);
            Person++;
        }
        else if (N1 == 2 && N2 == 1)
        {
            printf("\t\t\t\tYou choose Paper.\n");
            printf("\t\t\t\tComputer choose Scissor.\n");
            printf("\t\t\t\tComputer Wins Round %d\n", i + 1);
            Computer++;
        }
        else if (N1 == 1 && N2 == 2)
        {
            printf("\t\t\t\tYou choose Scissor.\n");
            printf("\t\t\t\tComputer choose Paper.\n");
            printf("\t\t\t\tYou Win Round %d\n", i + 1);
            Person++;
        }
        else if (N1 == N2)
        {
            printf("\t\t\t\tRound %d Tied\n", i + 1);
        }
        i++;
    }
    // Match Decideing Section
    if (Computer > Person)
    {
        printf("\t\t\t\tComputer Won The Match By %d-%d\n", Computer, Person);
    }
    else if (Computer < Person)
    {
        printf("\t\t\t\tCongrats! You Won The Match By %d-%d\n", Computer, Person);
    }
    else
    {
        printf("\t\t\t\tMatch Tied!\n");
    }
    printf("\t\t\t\t*************** Made With Love By \"EMON\" ***************\n");
    return 0;
}