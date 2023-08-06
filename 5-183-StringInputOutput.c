#include <stdio.h>
int main()
{
    char st[30];
    printf("Enter your name:");
    scanf("%s", &st);
    printf("%s", st); // This will only print before space because scanf cannot work with space
                      /*
                      Enter your name:Abdullah Emon
                                      Abdullah
                      */
    // See The next code to solve this problem
    return 0;
}