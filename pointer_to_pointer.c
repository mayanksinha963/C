//Write a program to print the value of a variable i by using the "pointer to pointer" type of variable

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 4;
    int* pntra = &a;
    int** pntrb = &pntra;
    printf("The value of variable is %d\n", **pntrb);
    printf("The address of varible is %d\n", pntrb);
    return 0;
}
