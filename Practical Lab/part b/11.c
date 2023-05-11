//C program to find LCM and GCD of two numbers

#include<stdio.h>
int LCM (int i, int ii)
{
    int numerator;
    int denominator;
    int remainder;
    int lcm;
    int gcd;
    
    if (i>ii)
    {
        numerator = i;
        denominator = ii;
    }
    else{
        denominator = i;
        numerator = ii;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    gcd = denominator;
    lcm = (i * ii)/ gcd;
    printf("LCM of the %d and %d is %d\n", i, ii, lcm);
    printf("GCD of the %d and %d is %d\n", i, ii, gcd);
    
    

}
int main(int argc, char const *argv[])
{
    int first, second;
    printf("Enter the first number : ");
    scanf("%d", &first);
    printf("Enter the second number : ");
    scanf("%d", &second);
    LCM(first, second);
    return 0;
}
