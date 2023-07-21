// GPA Trough Number
// Pass Number is 50
#include <stdio.h>
int main()
{
    float num;
    printf("Enter Your Number:");
    scanf("%f", &num);
    if (num >= 80)
    {
        printf("A+");
    }
    else if (num >= 70)
    {
        printf("A");
    }
    else if (num >= 60)
    {
        printf("A-");
    }
    else if (num >= 50)
    {
        printf("B");
    }
    else
    {
        printf("Fail.");
    }
    return 0;
}