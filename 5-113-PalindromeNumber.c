// If input number==reverse number then it is called a plaindrome number

#include <stdio.h>
int main()
{
    int n1, r, temp, vari = 0;
    printf("Enter a Number:\n");
    scanf("%d", &n1);
    temp = n1;
    while (temp != 0)
    {
        r = temp % 10;
        vari = vari * 10 + r;// This reverses the input
        temp = temp / 10;
    }
    if (n1 == vari)// comapring the num with reverse num 
    {
        printf("It is a Palindrome Number.");
    }
    else
    {
        printf("It is not a plaindrome number.");
    }

    return 0;
}