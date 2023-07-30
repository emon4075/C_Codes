/*
1
12
123
1234
12345
123456

*/

#include<stdio.h>
int main()
{
    int i,row,col,n;
    printf("Enter your range:");
    scanf("%d",&n);
    for ( row = 1; row <=n; row++)
    {
        for ( col= 1; col <=row; col++)
        {
            printf("%d",col);// coloumn er value print korchi
        }
        printf("\n");
    }
    
    return 0;
}

// Jodi row er value print koratm tobe 
/*
#include<stdio.h>
int main()
{
    int i,row,col,n;
    printf("Enter your range:");
    scanf("%d",&n);
    for ( row = 1; row <=n; row++)
    {
        for ( col= 1; col <=row; col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
    
    return 0;
}
*/