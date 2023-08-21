#include <stdio.h>
int main()
{
    char ch1 = 'a'; // This is aam jindigi
    printf("The charactar is: %c\n", ch1);

    typedef char Letter; // This is mentos jindigi
    // Now Letter will be like char
    Letter ch2 = 'A';
    printf("The charactar is: %c\n", ch2);

    return 0;
}