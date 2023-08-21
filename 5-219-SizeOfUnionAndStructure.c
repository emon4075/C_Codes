// The size of a union is typically determined by the size of its largest member.
// The size of a struct is typically determined by the size of its sum.
#include <stdio.h>
struct test1
{
    char name[20];   // 1*20 bytes
    int age, salary; // 4*2 bytes
    // Size = 28 bytes
};
union test2
{
    int x;    // 4 bytes
    float y;  // 4 bytes
    double z; // 8 bytes
    // Size = 8 bytes
};
union test3
{
    char name[20]; // 20 bytes
    int y;         // 4 bytes
    double z;      // 8 bytes
    // Size = 24 bytes
};
struct test4
{
    char name;       // 1 bytes
    int age, salary; // 4*2 bytes
    // Size = 9 bytes
    // But the compiler is showing 12 bytes may be because of dynamic memory allocation
};
int main()
{
    struct test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;
    printf("The size of struct test1 is %d bytes\n", sizeof(t1));
    printf("The size of union test2 is %d bytes\n", sizeof(t2));
    printf("The size of union test3 is %d bytes\n", sizeof(t3));
    printf("The size of struct test4 is %d bytes\n", sizeof(t4));
    return 0;
}

// LEARN ABOUT DYNAMIC MEMORY ALLOCATION