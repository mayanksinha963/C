//C program to find biggest of three number using nested if statement.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int first,second,third;
    printf("Enter the three different numbers (Give one space between them)\n");
    scanf("%d %d %d", &first, &second, &third);
    //printf("%d%d%d", first, second, third);
    if (first > second && first > third)
    {
        printf("%d is greater than other %d, %d\n", first, second, third);
    }
    else if (second > first && second > third)
    {
        printf("%d is greater than other %d, %d\n", second, first, third);
    }
    else if (third > second && third > first)
    {
        printf("%d is greater than other %d, %d\n", third, second, first);
    }
    else {
        printf("Either two number or three number are equal\n");
    }
    
    return 0;
}
