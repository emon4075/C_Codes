#include <stdio.h>
int num = 10; // This is a global variable used before main() function
int main()
{
    printf("Number is %d", num);
}
void display()
{
    printf("%d", num);
}