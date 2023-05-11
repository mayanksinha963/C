#include<stdio.h>
void sum(int* a, int* b) {
    int temp;
    int sub;
    sub = *a;
    temp = *a + *b;
    *a = temp;
    temp = sub - *b;
    *b = temp;
}
int main(int argc, char const *argv[])
{
    int a = 4;
    int b= 3;
    sum(&a, &b);
    printf("The sum of the number is %d\n",a);
    printf("The difference of the number is %d", b);

    return 0;
}
