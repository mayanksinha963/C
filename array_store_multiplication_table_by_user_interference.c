//Write a program to create an array of 10 integers and store a multiplication table of 5 in it
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int mul[10];
    int num;
    printf("Enter number for multiplication table\n");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        mul[i] = (i + 1) * num;
        printf("%d * %d = %d\n", num, i+1, mul[i]);
    }
    
    
    
    return 0;
}
