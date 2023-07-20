#include <stdio.h>
#include <math.h>
int main()
{
    double x, result;
    printf("Enter the value of x:");
    scanf("%lf", &x);
    result = round(x); // This will make the program round figure
    // try 2.49 and it will print 2.0000 while 2.51 as nput will print 3.00000 as output
    printf("%lf",result);
    return 0;
}



// use of trunc() function 
/*
#include <stdio.h>
#include <math.h>
int main()
{
    double x, result;
    printf("Enter the value of x:");
    scanf("%lf", &x);
    result = trunc(x);
    // trunc() function removes the digits after dot
    // 5.123456 it will print 5.00000 only
    printf("%lf", result);
    return 0;
}

*/


// ceil()
/*
#include <stdio.h>
#include <math.h>
int main()
{
    double x, result;
    printf("Enter the value of x:");
    scanf("%lf", &x);
    result =ceil(x);
    // ceil() prints the nearest purno songkha
    printf("%lf", result);
    return 0;
}

*/



// floor
/*
 #include <stdio.h>
#include <math.h>
int main()
{
    double x, result;
    printf("Enter the value of x:");
    scanf("%lf", &x);
    result =floor(x);
    // ceil() prints the nearest sorboccho purno songkha which is opposite of floor
    // ceil is like ceiling and floor is like floor(kom)
    // floor prints nearest sorbonimmo porno songkha
    printf("%lf", result);
    return 0;
}

*/