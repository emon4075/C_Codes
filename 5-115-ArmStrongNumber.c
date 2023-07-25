// 3 digit armstrong number
#include <stdio.h>
int main()
{
    int n1, r, temp, vari = 0;
    printf("Enter a number:\n");
    scanf("%d", &n1);
    temp = n1;
    while (temp != 0)
    {
        r = temp % 10;
        vari = vari + (r * r * r);
        temp = temp / 10;
    }
    if (vari == n1)
    {
        printf("It is an Armstrong Number");
    }
    else
    {
        printf("It is not an Armstrong number");
    }
    return 0;
}