//Write a C Program to find the Maximum and minimum of two numbers without using any loop or condition. 
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int num1 = 10, num2 = 20;

    printf("Max : %d\n", ((num1 + num2) + abs(num1-num2))/2);

    printf("Min : %d\n", ((num1 + num2) - abs(num1-num2))/2);
    
    return 0;
}
