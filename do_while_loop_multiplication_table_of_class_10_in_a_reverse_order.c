//Write a program to print a multiplication table of 10 in reversed order
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num, i=10;
    printf("Enter a number to get multiplication table in reverse order\n");
    scanf("%d", &num);

    do
    {
        printf("%d * %d = %d\n", num, i--, num*i);
        //i = i--;
    } while (i>0);
    

    return 0;
}
