#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr;
    char c;
    ptr = fopen("getc1.txt", "r");
    c= fgetc(ptr);
    while (c != EOF)
    {
        printf("%c", c);
        c= fgetc(ptr);
    }
    fclose(ptr);
    
    return 0;
}
