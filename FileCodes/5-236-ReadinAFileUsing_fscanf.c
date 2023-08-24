#include <stdio.h>

int main()
{
    // Declare a pointer to a file structure
    FILE *file;

    // Declare character arrays to store names and an integer for the year
    char n1[15], n2[5], n3[15];
    int year;

    // Open a file named "FirstFile.txt" in read mode ("r")
    file = fopen("FirstFile.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("File not opened.\n");
    }
    else
    {
        printf("File is opened!!!\n");
        while (!feof(file))
        {
            // Read data from the file using the specified format
            fscanf(file, "%s %s %s %d", &n1, &n2, &n3, &year);

            // Print the read data
            printf("%s %s %s %d\n", n1, n2, n3, year);
        }

        // Close the file after reading
        fclose(file);
    }

    // Return 0 to indicate successful completion of the program
    return 0;
}
