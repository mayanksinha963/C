//Write a program to read three integers from a file.

#include<stdio.h>
int main(int argc, char const *argv[])
{
        int a,b,c;
    FILE *ptr;
    ptr = fopen("interger.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The value of integer is %d\n", a);
    printf("The value of integer is %d\n", b);
    printf("The value of integer is %d\n", c);
    
    fclose(ptr);

    return 0;
}

