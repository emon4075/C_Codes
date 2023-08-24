// Go this link for details: https://www.freecodecamp.org/news/file-handling-in-c-how-to-open-close-and-write-to-files/

// Include the standard input-output library for file handling functions
#include <stdio.h>

int main()
{
    // Declare a pointer to a file structure
    FILE *file;

    // Open a file named "FirstFile.txt" in write mode ("w")
    file = fopen("FirstFile.txt", "w");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("File doesn't exist or couldn't be opened!\n");
    }
    else
    {
        printf("File Opened successfully!\n");
        // // Close the file after writing
        fclose(file);
    }

    // Return 0 to indicate successful completion of the program
    return 0;
}
