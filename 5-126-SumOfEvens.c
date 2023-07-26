#include <stdio.h>
int main()
{
    int i = 2, n, sum = 0;
    printf("Enter the last number:");
    scanf("%d", &n);
    do
    {
        sum = sum + i;
        i += 2;
    } while (i <= n);
    printf("Sum Of Evens:%d\n", sum); // printf function ta ke always loop er baire rakhte hobe na hoy statement ta barbar print korbe
    return 0;
}