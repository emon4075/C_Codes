 //1.5 + 2.5+ 3.5 + .... +n.5
 // Using Do-while
 #include<stdio.h>
 int main()
 {
    int i=1,n1,sum=0,n2=5;
    printf("Enter the last number:");
    scanf("%d",&n1);
    printf("1.5+2.5+3.5+.......%d.5=",n1);
    do
    {
        sum=sum+(i*n2);
        i++;
    } while (i<=n1);
    printf("%d",sum);
    return 0;
 }
 // Try as 1.5+3.5....n(one point five)