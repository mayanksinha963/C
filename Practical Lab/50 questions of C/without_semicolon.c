//Write a Program in C to Print all natural numbers up to N without using a semi-colon.
#include<stdio.h>
#define N 10
int main(int val)
{
    return (val <= N && printf("%d ", val) && main(val + 1));
}

