#include <stdio.h>

int main()
{
    // Option Section
    char name[10], Uni[10], Sub[10];
    char ch;
    int Op, Roll, num;

    // Display options to the user
    printf("\t----------------------------------------------\n");
    printf("\t|   1. Add Student    |    2. See Student     |\n");
    printf("\t----------------------------------------------\n");
    printf("Choose your choice: ");
    scanf("%d", &Op);

    // File Opening Section
    FILE *file;
    switch (Op)
    {
    case 1:
        // Adding student information
        printf("Entry Number: ");
        scanf("%d", &num);
        for (int i = 1; i <= num; i++)
        {
            // Open the file in append mode
            file = fopen("SimpleTry.txt", "a");
            if (file == NULL)
            {
                printf("File is not opened.\n");
            }
            else
            {
                // Input student details
                printf("Enter Name Of Person : %d: ",i);
                scanf("%s", name);
                printf("Enter Roll: ");
                scanf("%d", &Roll);
                printf("Enter University: ");
                scanf("%s", &Uni);
                printf("Enter Subject: ");
                scanf("%s", Sub);

                // Write student details to the file
                fprintf(file, "\t\t%s\t\t%d\t\t\t%s\t\t\t%s\n", name, Roll, Uni, Sub);
                fclose(file); // Close the file after writing
            }
        }
        break;

    case 2:
    printf("\t---------------------------------------------------------------------------------------\n");
    printf("\t|       Name     |      Roll        |         University       |       Subject        |\n");
    printf("\t---------------------------------------------------------------------------------------\n");
        // Viewing student information from the file
        // Open the file in read mode
        file = fopen("SimpleTry.txt", "r");
        if (file == NULL)
        {
            printf("File is not opened.\n");
        }
        else
        {
            // printf("File is opened!\n");

            // Read characters from the file until the end of the file (EOF) is reached
            while (!feof(file))
            {
                // Read a character from the file
                ch = fgetc(file);

                // Print the character to the console
                printf("%c", ch);
            }

            fclose(file); // Close the file after reading
        }
        break;

    default:
        break;
    }

    return 0;
}
