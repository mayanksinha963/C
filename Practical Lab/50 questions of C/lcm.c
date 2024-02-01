// Write a  C program to find the LCM of two numbers.
#include<stdio.h>

int gcd(int num1, int num2)
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


int lcm(int num1, int num2)
{
    int gcdresult = gcd(num1, num2);
    int numerator = num1*num2;
    if (numerator < 0)
    {
        numerator *= -1;
    }

    return (numerator)/gcdresult;
    

}
int main(int argc, char const *argv[])
{
    int num1 = 12, num2 = -9;
    int lcmresult = lcm(num1, num2);
    printf("LCM is : %d", lcmresult);
    return 0;
}
