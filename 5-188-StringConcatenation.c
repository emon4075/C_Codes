//String Concatenation:
//The concatenation operators combine two strings to form one string by appending the second string to the right-hand end of the first string

//Using strcat() library function
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="My Name is ";
    char str2[]="Abdullah Emon";
    strcat(str1,str2);// This library function will add str2 beside the str1
    printf("String-1 is: %s\n",str1);// here the new str1 has the both string values
    printf("String-2 is: %s",str2);
    return 0;
}