#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 74;
    int *ptra = &a;
    int *ptra2= NULL;
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptra);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);
    printf("The address of some garbarge is %p\n", ptra2);
    return 0;
}
