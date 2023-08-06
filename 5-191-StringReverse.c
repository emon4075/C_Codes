// String reverse using strrev() library function
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    printf("Enter the string: ");
    gets(str1);
    printf("Real String: %s", str1); // This will print the real one
    strrev(str1);
    printf("\nReversed String: %s", str1); // This will print the reversed one
    return 0;
}