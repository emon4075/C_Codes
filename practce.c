//16
#include<stdio.h>
int main()
{
    int mum,i,count=0;
    printf("Enter a number:\n");
    scanf("%d",&mum);
    for ( i = 2; i < mum; i++)
    {
        if (mum%i==0)
        {
            count++;
            break;
        }
        
    }
    if (count==0)
    {
        printf("It is a prime number");
    }
    else
    printf("This is not a prime number");
    
    return 0;
}