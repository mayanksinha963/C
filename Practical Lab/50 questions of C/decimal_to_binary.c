//Write a program to convert the binary into decimal number.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int binary;
    printf("Enter the binary number : ");
    scanf("%d", &binary);

    int d= 0, b = 1;

    while (binary != 0)
    {
        int r = binary%10;
        d = d + (r * b);
        b *= 2;
        binary = binary/10;
    }
    printf("Decimal number is : %d", d);
    return 0;
}
