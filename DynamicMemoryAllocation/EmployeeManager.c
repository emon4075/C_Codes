#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr; // Pointer to hold employee IDs
    int i = 0, n, id;

    // Input the number of employees
    printf("Enter Employee Number: ");
    scanf("%d", &n);

    while (i < n)
    {
        // Input the Employee ID Range
        printf("Enter Employee Id Range: ");
        scanf("%d", &id);
        getchar(); // Clearing the newline character from the buffer

        // Allocate memory for the employee ID using malloc
        ptr = (char *)malloc((id + 1) * sizeof(char));

        // Input the Employee ID for the current person
        printf("Enter Id For Person %d: ", i + 1);
        gets(ptr); // Note: gets() is used here, but it's not recommended due to security risks

        // Display the entered Employee ID
        printf("Id for %d is %s\n", i + 1, ptr);

        // Free the allocated memory for the employee ID
        free(ptr);

        i++; // Move to the next person
    }

    return 0;
}
// BETTER VERSION
/*

#include <stdio.h>
#include <stdlib.h>

#define MAX_ID_LENGTH 100  // Maximum length for an employee ID

int main() {
    char *ptr;
    int i = 0, n, id;

    printf("Enter Employee Number: ");
    scanf("%d", &n);
    getchar();  // Clearing the newline character from the buffer

    while (i < n) {
        printf("Enter Employee Id Range: ");
        scanf("%d", &id);
        getchar();  // Clearing the newline character from the buffer

        // Allocate memory for the employee ID using malloc
        ptr = (char *)malloc(MAX_ID_LENGTH * sizeof(char));

        // Input the Employee ID for the current person using fgets
        printf("Enter Id For Person %d: ", i + 1);
        fgets(ptr, MAX_ID_LENGTH, stdin);
        ptr[strcspn(ptr, "\n")] = '\0';  // Remove the trailing newline

        // Display the entered Employee ID
        printf("Id for %d is %s\n", i + 1, ptr);

        // Free the allocated memory for the employee ID
        free(ptr);

        i++;  // Move to the next person
    }

    return 0;
}


*/