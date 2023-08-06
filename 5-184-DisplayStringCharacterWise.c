#include <stdio.h>

int main()
{
    char st[] = "Sonar Bangla College"; // No need to explicitly specify array size

    // The correct way to iterate through the array is:
    for (int i = 0; i < sizeof(st) / sizeof(st[0]); i++)
    {
        printf("%c\n", st[i]); // Here, %c is used to print each character
    }

    return 0;
}
