#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    //the sizeof(variable)operator computes the size of a variable. And, to print the result returned by sizeof, we use either %lu or %zu format specifier.


    // %lu or %zu  are the format specifirs 
    printf("Size of Int = %zu bytes\n",sizeof(a));
    printf("Size of float = %zu bytes\n",sizeof(b));
    printf("Size of double = %zu bytes\n",sizeof(c));
    printf("Size of charactar = %zu bytes\n",sizeof(d));
    return 0;
}