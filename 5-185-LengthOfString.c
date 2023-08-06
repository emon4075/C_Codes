// String Length using the strlen() function

#include <stdio.h>
#include <string.h>
int main()
{
    char st[] = {}; // Length Undefined
    printf("Enter your Text:\n");
    gets(st); // This will take space whereas scanf cannot take

    // int len=strlen(st);
    printf("String lenght is : %d", strlen(st));
    return 0;
}