//Write a function SumVector which returns the sum of two vectors passed to it. The vectors must be two-dimensional.
#include<stdio.h>
typedef struct sum 
{
    int number;
}vector;

int main(int argc, char const *argv[])
{
    vector first;
    vector second;
    printf("Enter the first number\n");
    scanf("%d", &first.number);
    printf("Enter the second number\n");
    scanf("%d", &second.number);
    printf("The sum of the number is %d\n", first.number + second.number);
    return 0;
}
