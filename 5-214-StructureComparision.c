// Initializing Structure Variables without gets() and scanf()
// Contact Book
#include <stdio.h>

int main() {
    struct contact {
        int age;
        float salary;
    };

    struct contact contact1 = {21, 25500.50}; // Way-1
    struct contact contact2, contact3;
    contact2.age = 30;          // Way-2
    contact2.salary = 22400.50; // Way-2
    contact3 = contact2;        // Way-3

    printf("*****************Contact-1*****************\n");
    printf("Age is: %d\n", contact1.age);
    printf("Salary: %.2f\n", contact1.salary);

    printf("\n*****************Contact-2*****************\n");
    printf("Age is: %d\n", contact2.age);
    printf("Salary: %.2f\n", contact2.salary);

    printf("\n*****************Contact-3*****************\n");
    printf("Age is: %d\n", contact3.age);
    printf("Salary: %.2f\n", contact3.salary);
    printf("**********************************************\n");
                         // Comparing The Structure Variables
    if (contact1.salary == contact2.salary) {
        printf("Contact-1 and Contact-2 are at the same position of the company.\n");
    }
    else if (contact1.salary == contact3.salary) {
        printf("Contact-1 and Contact-3 are at the same position of the company.\n");
    }
    else if (contact2.salary == contact3.salary) {
        printf("Contact-2 and Contact-3 are at the same position of the company.\n");
    }

    return 0;
}
