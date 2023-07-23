// Conditional Operator and Ternary Operator are same
// '/'    '?'     ':' are called conditional or ternary operators
// Programmers rarely use conditional operators
#include <stdio.h>
int main()
{
    int n1, n2, large;
    printf("Enter Two Number:\n");
    scanf("%d %d", &n1, &n2);
    large = n1 > n2 ? n1 : n2;
    printf("%d is Large", large);
    return 0;
}