#include <stdio.h>
int main()
{
    FILE *file;
    char name[20], gender[10];
    int num, i, ph;
    file = fopen("S_Details.txt", "a+");
    if (file == NULL)
    {
        printf("File is not Opened.\n");
    }
    else
    {
        printf("Enter Students Number: ");
        scanf("%d", &num);
        for (i = 1; i <= num; i++)
        {
            printf("Enter Name: ");
            scanf("%s", &name);
            printf("Enter Gender: ");
            scanf("%s", &gender);
            printf("Enter Phone Number: ");
            scanf("%d", &ph);
            fprintf(file, "\n\t%s\t\t\t%s\t\t\t\t%d", name, gender, ph);
        }
        fclose(file);
    }
    return 0;
}