#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[34];
    gets (name);
    printf("%s\n", name);
    //printStr(name);
    scanf("%s", name);
    printf("%s\n", name);
    
    char hello[10];
    gets(hello);
    //printStr(str);
    printf("%s", hello);
    return 0;
}
