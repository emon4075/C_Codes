#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // -----------------------------------Intro Section---------------------------------
    printf("\t\t\t\t      \"DICE GAME\"\n");
    printf("\t\t-----------------------------------------------------\n");
    printf("\t\tHints:\n");
    printf("\t\t      1.The Computer will set you a target.\n");
    printf("\t\t      2.You will have to achieve that in 3 chances.\n");
    printf("\t\t      3.If you do then you will win!!\n");
    printf("\t\tPress Enter To Proceed....");
    getchar();
    //---------------------------Random Number Generation Section-----------------------
    int target;
    srand(time(0));
    target = (rand() % (18 - 10 + 1)) + 10;
    printf("\t\t-----------------------------------------\n");
    printf("\t\t|           Your target is: %d           |\n", target);
    printf("\t\t-----------------------------------------\n");
    int count = 1;
    int user;
    char ch;
    int Total_Score = 0;
    while (count <= 3)
    {
        printf("\t\tEnter 'R' To Roll The Dice: ");
        scanf("%c", &ch);
        getchar();
        if (ch == 'R' || ch == 'r')
        {
            printf("\t\t--------------\n");
            printf("\t\t|  Round %d:  |\n", count);
            printf("\t\t--------------\n");
            // -----------------------Dice Number For User Section------------------------------
            srand(time(0));
            user = (rand() % 6 - 1 + 1) + 1;
            Total_Score += user;
            // --------------------------Switch & Display Section-------------------------------
            switch (user)
            {
            case 1:
                printf("\t\t\t\t-------------\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t|     *     |\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t-------------\n");
                printf("\t\tTotal Score after Round-%d: %d\n", count, Total_Score);
                break;
            case 2:
                printf("\t\t\t\t-------------\n");
                printf("\t\t\t\t|          *|\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t|*          |\n");
                printf("\t\t\t\t-------------\n");
                printf("\t\tTotal Score after Round-%d: %d\n", count, Total_Score);
                break;
            case 3:
                printf("\t\t\t\t-------------\n");
                printf("\t\t\t\t|          *|\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t|     *     |\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t|*          |\n");
                printf("\t\t\t\t-------------\n");
                printf("\t\tTotal Score after Round-%d: %d\n", count, Total_Score);
                break;
            case 4:
                printf("\t\t\t\t-------------\n");
                printf("\t\t\t\t|*         *|\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t|*         *|\n");
                printf("\t\t\t\t-------------\n");
                printf("\t\tTotal Score after Round-%d: %d\n", count, Total_Score);
                break;
            case 5:
                printf("\t\t\t\t-------------\n");
                printf("\t\t\t\t|*         *|\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t|     *     |\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t|*         *|\n");
                printf("\t\t\t\t-------------\n");
                printf("\t\tTotal Score after Round-%d: %d\n", count, Total_Score);
                break;
            case 6:
                printf("\t\t\t\t-------------\n");
                printf("\t\t\t\t| *       * |\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t| *       * |\n");
                printf("\t\t\t\t|           |\n");
                printf("\t\t\t\t| *       * |\n");
                printf("\t\t\t\t-------------\n");
                printf("\t\tTotal Score after Round-%d: %d\n", count, Total_Score);
                break;

            default:
                break;
            }
        }
        else
        {
            printf("\t\tInvalid Command!!!\n");
            exit(0);
        }
        count++;
    }
    // ------------------------------Winner Deciding Section-------------------------------
    printf("\t\t-------------------------------------------------\n");
    printf("\t\t|               Match Summary:                   |\n");
    printf("\t\t-------------------------------------------------\n");
    if (Total_Score >= target)
    {
        printf("\t\tTarget: %d\n", target);
        printf("\t\tAchieved: %d\n", Total_Score);
        printf("\t\tCongrats! You Win!!!!\n");
    }
    else
    {
        printf("\t\tTarget: %d\n", target);
        printf("\t\tAchieved: %d\n", Total_Score);
        printf("\t\tHard Luck! Try Next Time!\n");
    }
    printf("\t\t*************** Made With Love By \"EMON\" ***************\n");

    return 0;
}