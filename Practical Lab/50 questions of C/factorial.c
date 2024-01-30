//Calculate factorial

#include<stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n-1);
    
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int f = factorial (n);
    
    printf("Factorial of number is : %d", f);
    return 0;
}
