#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr;
    int num = 43;
    ptr = fopen("generated.txt", "w");
    fprintf(ptr, "The number is %d\n", num);
    fprintf(ptr, "Thanks for using fprint");
    fclose(ptr);

    return 0;
}
