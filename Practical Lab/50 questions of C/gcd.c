//Write a  C program to find the GCD of two numbers.
#include<stdio.h>

int gcd (int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return gcd(num2, num1%num2);
    }
    
}
int main(int argc, char const *argv[])
{
    int num1 = 56, num2 = 98;
    int result = gcd(num1, num2);
    printf("%d\n", result);

    return 0;

    
}
