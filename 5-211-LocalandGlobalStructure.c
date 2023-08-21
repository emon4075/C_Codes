// Global structure can be used by any function icluding the main()
// Local structures can only be used in that specific function
#include <stdio.h>
struct Global // This is a global structure
{
    char name[30];
    int age;
    float salary;
};

int main()
{
    struct Local // This is a local structure only main() function can use this structure
    {
        char name[30];
        int age;
        float salary;
    };
    return 0;
}