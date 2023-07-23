/*
Bit wise opeartor er belay &,|,^(and,or,Xor) use hoy.
ei khetre kebol int type er number valid. prothome int gulare binary te convert kore then eigulare 8bit e niye bit wise and,or othoba X-OR kore
*/
#include <stdio.h>
int main()
{
    int n1, n2, res;
    printf("Enter Two Numbers:");
    scanf("%d %d", &n1, &n2);
    res = n1 & n2;// Bit wise and(&)
    printf("%d", res);
    return 0;
}


// Same bitwise or and X-OR 