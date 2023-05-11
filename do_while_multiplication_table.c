#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int i=1;
    printf("Enter a number to getting multiplication table\n");
    scanf("%d\n", &num);
    do
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i = i + 1;
    } while (i<11);
    

    return 0;
}
