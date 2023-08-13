// This program includes function to display the square
#include <stdio.h>
// Square function
int square(int a)
{
    return a * a;
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Square is: %d\n", square(a));
}