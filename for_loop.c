#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Hellow World\n");
    int i, j;
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    for (i = 0, j = 0; i < num ; i++)
    {
        printf("%d %d\n", i, j);
    }
    return 0;
}

