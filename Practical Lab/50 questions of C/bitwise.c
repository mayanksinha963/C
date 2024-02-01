//Write a C Program to check if two numbers are equal without using the bitwise operator. 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x = 1;
    int y = 1;

    if (!(x^y))
    {
        printf("Both number are equal");
    }
    else
    {
        printf("Both number are not equal");
    }
    
    return 0;
}
