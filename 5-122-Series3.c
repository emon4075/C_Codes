#include <stdio.h>
int main()
{
    int n1, n2, a = 1, b = 2, sum = 0;
    printf("Enter the last values:\n");
    scanf("%d %d", &n1, &n2);
    printf("1.2+2.3+3.4+.........%d.%d=", n1, n2);
    while (a<=n1 && b<=n2)
    {
        sum=sum+(a*b);
        a++;
        b++;
    }
    
    printf("%d", sum);
    return 0;
}
//1.2+2.3+3.4+.........4.5=40