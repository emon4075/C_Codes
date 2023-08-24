// Include necessary libraries for standard input-output and string functions
// fputc -- takes input charactar wise
#include <stdio.h>
#include <string.h>

int main()
{
    // Declare a pointer to a file structure
    FILE *file;

    // Declare a character array to store the user's name
    char name[40];
    int i;

    // Prompt the user to enter their name
    printf("Enter Your Name: ");
    
    // Read the user's name using the gets() function (Note: gets() is unsafe, consider using fgets() instead)
    gets(name);

    // Calculate the length of the user's name
    int length = strlen(name);

    // Open a file named "FirstFile.txt" in append mode ("a")
    file = fopen("FirstFile.txt", "a"); // Append mode adds new text after the existing text

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("File doesn't exist or couldn't be opened!\n");
    }
    else
    {
        // Loop through the characters in the user's name and write each character to the file
        for (i = 0; i < length; i++)
        {
            fputc(name[i], file);
        }

        // Display success messages
        printf("File Opened successfully!\n");
        printf("Name Added Successfully!\n");

        // Close the file after writing
        fclose(file);
    }

    // Return 0 to indicate successful completion of the program
    return 0;
}
