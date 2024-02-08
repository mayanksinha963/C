#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr = fopen("main_read.txt", "r");
    // char c = fgetc(ptr);
    // printf("First letter of the file is : %c\n", c);

    char str[4];
    fgets(str, 3, ptr);
    printf("String of the file is : %s\n", str);



    fclose(ptr);
    return 0;
}
