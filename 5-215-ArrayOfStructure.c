// (Name,Age,Salary) Of 5 persons
#include <stdio.h>
struct Person
{
    char NickName[10];
    int Age;
    float Salary;
};

int main()
{
    struct Person Person[5]; // Array for 5 Persons
    // Taking Input
    for (int i = 0; i < 5; i++)
    {
        printf("Enter details for Person %d :\n", i + 1);
        printf("Name : ");
        gets(Person[i].NickName);
        printf("Age : ");
        scanf("%d", &Person[i].Age);
        printf("Salary : ");
        scanf("%f", &Person[i].Salary);
        getchar(); // We can use fflush(stdin) also
    }
    for (int i = 0; i < 5; i++)
    {
        printf("************Person-%d**************\n",i+1);
        printf("Name : %s\n", Person[i].NickName);
        printf("Age : %d\n", Person[i].Age);
        printf("Salary : %.2f\n", Person[i].Salary);
    }

    return 0;
}