#include <stdio.h>
// Global Structure
// Structure is a kind of data type which is a collection of various data types
struct Person
{
    char name[30];
    int age;
    float salary;
};

int main()
{
    struct Person Person1, Person2;
    printf("Enter Person-1 Details(Name,Age,Salary): \n");
    gets(Person1.name);
    scanf("%d", &Person1.age);
    scanf("%f", &Person1.salary);
    printf("Name: %s\n", Person1.name);
    printf("Age : %d\n", Person1.age);
    printf("Salary : %.2f\n", Person1.salary);
    printf("**********************************\n");
    getchar(); // Helps me to Take the Inputs form Person-2 without any problem
    // Try The code Without getchar();
    /*
    The getchar() function is used to consume the newline character left in the input buffer after reading the age and salary values for Person1 using scanf(). This is necessary because when you use scanf() to read numeric values like integers and floats, it leaves the newline character (Enter key) in the input buffer, which can cause issues when you try to read strings using gets().
    */
    printf("Enter Person-2 Details(Name,Age,Salary): \n");
    gets(Person2.name);
    scanf("%d", &Person2.age);
    scanf("%f", &Person2.salary);
    printf("Name: %s\n", Person2.name);
    printf("Age : %d\n", Person2.age);
    printf("Salary : %.2f\n", Person2.salary);
    return 0;
}