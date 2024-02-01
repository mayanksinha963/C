// Write a Program to find the area of a circle.
#include<stdio.h>
#define PI 3.14
float area(int r)
{
    // printf("%.2f", PI*r*r);
    return PI*r*r;
}

int main(int argc, char const *argv[])
{
    printf("Area of circle is : %.2f", area(5));
    return 0;
}
