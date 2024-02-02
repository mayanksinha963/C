//Write a program to create pyramid structure in c
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf(" ");
        }
        for (int j = 1; j < i*2; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}
