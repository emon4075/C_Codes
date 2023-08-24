// Include the standard input-output library
#include <stdio.h>

int main()
{
    // Declare a pointer to a file structure
    FILE *file;

    // Declare a character variable to store individual characters
    char ch;

    // Open a file named "Name_Age.txt" in read mode ("r")
    file = fopen("Name_Age.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("File is not opened.\n");
    }
    else
    {
        printf("File is opened!\n");

        // Read characters from the file until the end of the file (EOF) is reached
        while (!feof(file))
        {
            // Read a character from the file
            ch = fgetc(file);

            // Print the character to the console
            printf("%c", ch);
        }

        // Close the file after reading
        fclose(file);
    }

    // Return 0 to indicate successful completion of the program
    return 0;
}
