//C program for given two numbers to perform arithmetic operations using switch statement
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float first;
    float second;
    int code;
    printf("Enter first number\n");
    scanf("%f", &first);
    printf("Enter second number\n");
    scanf("%f", &second);
    printf("Enter 1 for add\nEnter 2 for substraction\nEnter 3 for multiplication\nEnter 4 for division\n");
    scanf("%d", &code);
    switch (code)
    {
    case 1:
        printf("%.2f + %.2f = %.2f\n", first, second, first + second);
        break;
    case 2:
        printf("%.2f - %.2f = %.2f\n", first, second, first - second);
        break;
    case 3:
        printf("%.2f x %.2f = %.2f\n", first, second, first * second);
        break;
    case 4:
        printf("%.2f / %.2f = %.2f\n", first, second, first / second);
        break;
    default:
        printf("Enter the valid code\n");
        break;
    }
    return 0;
}
