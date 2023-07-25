// This program can find out three and four digit armstrong numbers by using switch,case and break method

#include <stdio.h>
int main()
{
    int op, n1, temp, vari = 0, r; // r---reminder temp---temporary op---option
    printf("How Many Digits Do You Want\?\n");
    printf("1.\tThree.\n");
    printf("2.\tFour.\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Enter a 3 digit number:\n");
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
        break;
    case 2:
        printf("Enter a 4 digit number:\n");
        scanf("%d", &n1);
        temp = n1;
        while (temp != 0)
        {
            r = temp % 10;
            vari = vari + (r * r * r * r);
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
        break;

    default:
        printf("Choose Between 1-2");
        break;
    }
    return 0;
}