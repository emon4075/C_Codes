#include<stdio.h>
int main()
{
    int i;
    for ( i = 1; i < 20; i++)
    {
        if (i%3==0)
            continue;// bypass ---- this means code will not go to the next line but it will go back to for loop again
            printf("%d\n",i);
        if (i==10)
            break;// terminates the code
        
        
    }
    
    return 0;
}