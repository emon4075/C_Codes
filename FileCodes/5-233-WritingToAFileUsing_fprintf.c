#include <stdio.h>
int main()
{
    FILE *file;
    char name[30];
    int age;
    file = fopen("Name_Age.txt", "a");
    if (file == NULL)
    {
        printf("File is not opened.\n");
    }
    else
    {
        printf("File is opened!\n");
        printf("Enter Name: ");
        gets(name);
        printf("Enter Age: ");
        scanf("%d", &age);
        fprintf(file, "\nName: %s\nAge: %d", name, age);
        printf("File written successfully!!\n");
        fclose(file);
    }
    return 0;
}