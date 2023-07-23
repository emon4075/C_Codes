#include <stdio.h>
int main()
{
    double celci, faren;
    int op;
    printf("Which one do you want.\n");
    printf("1.Celcius To Farenhite.\n");
    printf("2.Farenhite To Celcius.\n");
    printf("Choose your choice:\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Enter celsius value:\n");
        scanf("%lf", &celci);
        faren = (1.8 * celci) + 32;
        printf("Farenhite Value is=%lf", faren);
        break;
    case 2:
        printf("Enter farenhite value:\n");
        scanf("%lf", &faren);
        celci = (faren - 32) / 1.8;
        printf("Celcius Value is =%lf", celci);
        break;

    default:
        printf("Wrong Input.Choose Between 1-2.");
        break;
    }
    return 0;
}