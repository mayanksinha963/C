//Write a structure capable of storing date. Write a function to compare those dates.
#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
} date;

int display(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        printf("\n\n\tFirst date is greater than second\n");
        return 0;
    }
    else if (d1.year < d2.year)
    {
        printf("\n\n\tSecond Dateis greater than first\n");
        return 0;
    }

    if (d1.month > d2.month)
    {
        printf("\n\n\tFirst date is greater than second\n");
        return 0;
    }
    else if (d1.month < d2.month)
    {
        printf("\n\n\tSecond Date is greater than first\n");
        return 0;
    }

    if (d1.date > d2.date)
    {
        printf("\n\n\tFirst date is greater than second\n");
        return 0;
    }
    else if (d1.date < d2.date)
    {
        printf("\n\n\tSecond Date is greater than first\n");
        return 0;
    }
    if (d1.date = d2.date)
    {
        printf("\n\n\tBoth dates are equal\n");
    }
    
}

int main(int argc, char const *argv[])
{
    date d1;
    date d2;
    printf("Enter the year (first)\n");
    scanf("%d", &d1.year);

    printf("Enter the month (first)\n");
    scanf("%d", &d1.month);
    if (("%d", d1.month) > 12)
    {
        printf("Please enter the valid month...!\n");
        return 0;
    }
    printf("Enter the date (first)\n");
    scanf("%d", &d1.date);
    if (("%d", d1.month) %2 == 1)
    {
        if (("%d", d1.date) > 31)
        {
            printf("Please enter the valid date\n");
            return 0;
        }
        
    }
    if (("%d", d1.month) != 2 && ("%d",d1.month) %2 == 0)
    {   
        if (("%d", d1.date) > 30)
        {
            printf("Enter the valid date\n");
            return 0;
        }
        
    }
    if (("%d", d1.month) == 2)
    {
        if (("%d", d1.date) > 29)
        {
                printf("Enter the valid date\n");
                return 0;
        }
        
    }
    
    
    
    printf("(First) Date is %d.%d.%d\n\n", d1.date, d1.month, d1.year);

    printf("Enter the year (second)\n");
    scanf("%d", &d2.year);
    printf("Enter the month (second)\n");
    scanf("%d", &d2.month);
    if (("%d", d2.month) > 12)
    {
        printf("Please enter the valid month...!\n");
        return 0;
    }
    printf("Enter the date (second)\n");
    scanf("%d", &d2.date);
    if (("%d", d2.month) %2 == 1)
    {
        if (("%d", d2.date) > 31)
        {
            printf("Please enter the valid date\n");
            return 0;
        }
        
    }
    if (("%d", d2.month) != 2 && ("%d",d2.month) %2 == 0)
    {   
        if (("%d", d2.date) > 30)
        {
            printf("Enter the valid date\n");
            return 0;
        }
        
    }
    if (("%d", d2.month) == 2)
    {
        if (("%d", d2.date) > 29)
        {
                printf("Enter the valid date\n");
                return 0;
        }
        
    }
    

    printf("(First) Date is %d.%d.%d\n", d2.date, d2.month, d2.year);
    display(d1, d2);
    return 0;
}
