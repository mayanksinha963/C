#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    label:
        printf("Hellow World\n");
    goto end;
        printf("Hii bulldog\n");
    goto label;
    end :
        printf("We are at the end\n");
    return 0;
}
