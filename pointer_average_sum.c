//Write a program using a function that calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().


#include<stdio.h>
int number (int *first, int *second) {
    int sum;
    sum =  *first + *second;
    
}
int average (int *first, int *second) {
    int average;
    average = (*first + *second) / 2;
}
int main(int argc, char const *argv[])
{
    int first, second;
    int a;
    printf("Enter the first number\n");
    scanf("%d", &first);
    printf("Enter the second number\n");
    scanf("%d", &second);

    a= number (&first, &second);
    printf("Sum of the number is %d\n",a);
    int b;
    b= average (&first, &second);
    printf("Average of the number is %d\n", b);
    return 0;
}
