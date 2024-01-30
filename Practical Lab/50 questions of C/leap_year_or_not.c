// Years divisible by 4 are potential leap years.
// Years divisible by 100 are not leap years, unless they are also divisible by 400.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("It's leap year");
    }
    else
    {
        printf("It's non- leap year");
    }
    
    return 0;
}
