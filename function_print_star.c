//Write a program using functions to print the following pattern (print n lines)
#include<stdio.h>
void star(int num);
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter number for print star\n");
    scanf("%d", &number);
    star(number);
    return 0;
}

void star(int num){
    if (num == 1)
    {
        printf("*\n");
        return;
    }
    star(num-1);
    int i;
    for ( i = 0; i < (2 * num -1); i++)
    {
        printf("*");
    }
    printf(" \n");
    
    
}

