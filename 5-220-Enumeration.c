#include <stdio.h>
enum days_in_week
{
    sun,mon,tue,wed,thrus,fri,sat
};
int main()
{
    enum days_in_week day1, day2;
    day1 = sun;
    printf("Day1 = %d th day of a week\n", day1);
    day2 = fri;
    printf("Day2 = %d th day of a week\n", day2);
    int gap = day2 - day1;
    printf("The Gap between Day1 and Day2 is = %d\n", gap);
    return 0;
}