#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr = fopen("main_wright.txt", "w");
    fputc('H',ptr);
    fputs("\nHello Everyone!! How are you", ptr);
    return 0;
}
