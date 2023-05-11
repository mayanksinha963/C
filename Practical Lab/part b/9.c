//C program to find factorial of a number using recursive function.

#include<stdio.h>
int factorial (int num){
    int i=1;
    int mult=1;
    for (int i = 1; i <= num; i++)
    {
        mult = mult * i;
    }
    
    return mult;

}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter number to calculate factorial : ");
    scanf("%d", &num);
    factorial (num);
    printf("Factorial of %d : %d", num, factorial(num));
    return 0;
}
