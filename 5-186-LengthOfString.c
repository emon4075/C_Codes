// String Length without using the strlen() function

#include <stdio.h>
#include <string.h>
int main()
{
    char st[] = {"Bangladesh"};
    int len = 0, i = 0;
    while (st[i] != '\0')
    {
        i++;
        len++;
    }
    printf("Length of the string is: %d", len);
    return 0;
}