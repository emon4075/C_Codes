#include <stdio.h> // Include the standard I/O library for input/output functions.

#define cu printf("University Of Chittagong\n"); // Define a macro "cu" that prints the university name.

#define name "Md Abdullah Al Mamun Emon" // Define a macro "name" that holds a student's name.
#define ID 4075                          // Define a macro "ID" that holds a student's ID.

int main() // The main function where the program execution starts.
{
    printf("University: ");     // Print the label "University: ".
    cu;                         // Call the defined macro "cu" to print the university name.
    printf("Name: %s\n", name); // Print the label "Name:" followed by the student's name.
    printf("ID: %d", ID);       // Print the label "ID:" followed by the student's ID.
    return 0;                   // Indicate successful program execution by returning 0.
}
