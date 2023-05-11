#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr;
    ptr = fopen("puts.txt", "w");
    putc('c', ptr);
    fclose(ptr);
    return 0;
}
