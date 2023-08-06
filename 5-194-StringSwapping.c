#include <stdio.h>
#include <string.h>
int main()
{
    printf("---------Real Part--------\n");
    char str1[15] = "Bangladesh", str2[15] = "India", temp[15];
    printf("String-1 : %s\n", str1);
    printf("String-2 : %s\n", str2);
    printf("---------Swapping Part--------\n");
    strcpy(temp, str2);
    strcpy(str2, str1);
    strcpy(str1, temp);
    printf("String-1 : %s\n", str1);
    printf("String-2 : %s\n", str2);
    return 0;
}