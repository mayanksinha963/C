#include<stdio.h>
int main(int argc, char const *argv[])
{
    int p;
    int r;
    int t;

    printf("For calculating simple interest\n");
    printf("Enter the Intial Principal Balance\n");
    scanf("%d", &p);

    printf("Enter the Annual Interest Rate\n");
    scanf("%d", &r);

    printf("Enter the Time(in Year)\n");
    scanf("%d", &t);

    printf("Simple Interest of Required Data is %d\n", p*r*t/100);

    return 0;
}
