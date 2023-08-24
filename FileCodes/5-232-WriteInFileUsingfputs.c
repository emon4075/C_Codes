#include <stdio.h>
int main()
{
    FILE *file;
    char Uni_Name[30];
    file = fopen("FirstFile.txt", "a");
    if (file == NULL)
    {
        printf("File is not opened!\n");
    }
    else
    {
        printf("File is Opened!\n");
        printf("Enter Your University Name: ");
        gets(Uni_Name);
        fputs(Uni_Name, file);
        fputs("\n", file);
        printf("Text Added Successfully\n");
        fclose(file);
    }
    return 0;
}