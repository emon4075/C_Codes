// Contact Book
#include <stdio.h>
void ArrayIn(int array[11]) // Function for Array Input
{
    for (int i = 0; i < 11; i++)
    {
        scanf("%d", &array[i]);
        getchar();
    }
}
void ArrayOut(int array[11]) // Function for Array Output
{
    for (int i = 0; i < 11; i++)
    {
        printf("%d", array[i]);
    }
}
int main()
{
    struct contact
    {
        char NickName[10];
        int C_Num[11];
    };
    struct contact contact1, contact2;
    // Contact-1 Section
    printf("*****************Conatct-1*****************\n");
    printf("Name : ");
    gets(contact1.NickName);
    printf("Number: \n");
    ArrayIn(contact1.C_Num);
    printf("Name : %s\n", contact1.NickName);
    printf("Number: ");
    ArrayOut(contact1.C_Num);
    // Contact-2 Section
    printf("\n*****************Conatct-2*****************\n");
    printf("Name : ");
    gets(contact2.NickName);
    printf("Number: \n");
    ArrayIn(contact2.C_Num);
    printf("Name : %s\n", contact2.NickName);
    printf("Number: ");
    ArrayOut(contact2.C_Num);
    return 0;
}