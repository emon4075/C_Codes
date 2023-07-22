#include <stdio.h>
int main()
{
    int i=5;
    printf("%d\n",i++);//5---6
    printf("%d\n",i--);//6---5
    printf("%d\n",++i);//6
    printf("%d\n",i++);//6---7
    printf("%d\n",i);//7
    printf("%d\n",--i);//6
    printf("%d\n",i++);//6---7
    printf("%d\n",i);//7
    printf("%d\n",i--);//7---6
    printf("%d\n",--i);//5
    return 0;
}