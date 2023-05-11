//C program to check whether the given number is prime or not.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int result;
    printf("Enter number to check wheather it is prime or not\n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("%d is a prime number\n", num);
    }
    
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            result= 1;
        }
    }
    if (result == 1)
    {
        printf("%d is not a prime number\n", num);
    }
    else 
    {
        printf("%d is a prime number\n", num);
    }
    
    
    return 0;
}
