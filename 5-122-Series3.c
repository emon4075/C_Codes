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



// Alternative
/*

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the last number:");
    scanf("%d", &n);
    printf("1.2+2.3+3.4+.........+%d.%d = ", n, n + 1);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (i * (i + 1));
    }
    printf("%d", sum);
    return 0;
}

*/