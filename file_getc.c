#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr;
    ptr = fopen("getc.txt", "r");
    //char c = fgetc(ptr);
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    
    fclose(ptr);
    return 0;
}
