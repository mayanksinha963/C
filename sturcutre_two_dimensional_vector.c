#include<stdio.h>
typedef struct a
{
    int one;
    int two;
} vector;

int main(int argc, char const *argv[])
{
    vector mayank;
    vector dhruv;
    mayank.one = 100;
    mayank.two = 500;
    printf("The first vector is %d and second one is %d\n", mayank.one, mayank.two);
    dhruv.one = 1000;
    dhruv.two=5000;
    printf("The first vector is %d and second one is %d\n", dhruv.one, dhruv.two);
    return 0;
}
