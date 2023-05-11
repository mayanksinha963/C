#include<stdio.h>
void swap (int* a, int* b) {
    int temp;
    temp = *a * 10;
    *a = *b;
    *b = temp;
}
int main(int argc, char const *argv[])
{
    int x=3, y=4;
    printf("Before swap = %d %d\n", x, y);
    swap (&x, &y);
    printf("After swap  = %d %d\n", x, y);
    return 0;
}
