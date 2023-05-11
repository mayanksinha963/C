//Write a program to print the address of a variable. Use this address to get the value of this variable.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 4;
    int* ptra = &a;
    printf("The address of variable is %d\n", &a);
    printf("The address of variable is %d\n", &ptra);
    printf("The value of this variable is %d\n", a);
    printf("The value of this variable is %d\n", *ptra);
    return 0;
}
