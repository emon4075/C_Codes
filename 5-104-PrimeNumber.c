#include <stdio.h>
int main()
{
    int num, count = 0, i;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }
            if (count == 0)
        {
            printf("It is a prime number");
        }

        else{
            printf("It is not a prime number");
        }

    return 0;
}