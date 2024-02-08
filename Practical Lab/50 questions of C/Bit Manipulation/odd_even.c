#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 8;
    if (a & 1)
    {
        printf("%d is odd\n",a);
    }

    if (!(b&1))
    {
        printf("%d is even",b);
    }
    
    
    return 0;
}
