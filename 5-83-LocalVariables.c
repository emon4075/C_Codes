#include<stdio.h>
int main()
{
    int num=10;//local variable for main() function only
    printf("Number is =%d",num);
}
void display()
{
    printf("Number is=%d",num);// as the num variable is only for main() function because it is a local variable that's why it will not work in the display() function
}