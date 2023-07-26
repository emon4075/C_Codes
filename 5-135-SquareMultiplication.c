// 1^2 X 2^2 X 3^2 X.... X n^2
#include <stdio.h>
int main()
{
    int i = 1, n;
    long long int sum = 1;
    printf("Enter the last number:");
    scanf("%d", &n);
    printf("1^2 X 2^2 X 3^2 X.... X %d^2: ", n);
    while (i<=n)
    {
        sum=sum*(i*i);
        i++;
    }
    printf("%lld",sum);
    return 0;
}