//IncrementDecrement Topic er Best Logical Part 
// Ei part ta bhalo kore buje buje korte hobe

#include<stdio.h>
int main()
{
    int x=10;
    printf("%d\n",x++);//10
    printf("%d\n",x);//11
    printf("%d\n",x++);//11---------mone mone 12
    printf("%d\n",++x);//13
    printf("%d\n",x);//13
    printf("%d\n",x--);//13-----mone mone 12
    printf("%d\n",--x);//11
    printf("%d\n",x);//11
    printf("Alhamdulillah");
    return 0;
}