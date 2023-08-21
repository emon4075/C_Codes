// I will make a display() function and I will pass a structure to this.
// This Function will print the structure elements
// (Name,Age,Salary) Of 5 persons
#include <stdio.h>
#include <string.h>
struct Person
{
    char NickName[20]; // Array WithIn Structure
    int Age;
    float Salary;
};

// You have to declare the function after the structure is declared
void Display(struct Person P)
{
    printf("************Person**************\n");
    printf("Name : %s\n", P.NickName); // Array WithIn Structure
    printf("Age : %d\n", P.Age);
    printf("Salary : %.2f\n", P.Salary);
}
int main()
{
    struct Person Person1, Person2;
    // Input for Person-1
    strcpy(Person1.NickName, "Abdullah Emon"); // Use strcpy to copy the string
    /*
    Q: Why strcpy() is used
    A: When strcpy is called, it starts copying characters from the source to the destination until it reaches the null-terminator ('\0') character in the source string. The null-terminator marks the end of the string in C.

    */
    Person1.Age = 21;
    Person1.Salary = 10000.00;
    // Input for Person-2
    strcpy(Person2.NickName, "Abdur Rashid");
    Person2.Age = 58;
    Person2.Salary = 30000.00;
    // Showing Output
    Display(Person1);
    Display(Person2);
    return 0;
}