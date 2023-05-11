#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("Mayank.txt", "r");
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);
    fscanf(ptr, "%d", &num2);
    printf("The value of num2 is %d\n", num2);
    fclose(ptr);
    return 0;
}
