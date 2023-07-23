#include <stdio.h>
int main()
{
    char operator;
    double n1, n2, result;
    printf("Enter an operator:\n");
    scanf("%c", &operator);
    printf("Enter Two Numbers:\n");
    scanf("%lf %lf", &n1, &n2);
    switch (operator)

    {
    case '+':
        result = n1 + n2;
        printf("Addition is:%lf", result);
        break;
    case '-':
        result = n1 - n2;
        printf("Remaining is:%lf", result);
        break;
    case '*':
        result = n1 * n2;
        printf("Multiplication is:%lf", result);
        break;
    case '/':
        result = n1 / n2;
        printf("Division is:%lf", result);
        break;

    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}