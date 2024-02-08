#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf ("a : %d, b: %d", a, b);
    return 0;
}
