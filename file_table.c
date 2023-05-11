//Write a program to generate a multiplication table of a given number in text format. Make sure that the file is readable 
//and well-formatted.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    int num;
    printf("Enter the number for multiplication table\n");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)   
    {
        fprintf(ptr, "%d x %d = %d\n", num, i, num*i);
    }
    
    return 0;
}
