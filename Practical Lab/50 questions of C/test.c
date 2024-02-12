#include<stdio.h>

#define CUBE(X) X*X*X
// int cube (int X)
// {
//     return X*X*X;
// }


int main(int argc, char const *argv[])
{
    int a;
     a= 64/CUBE(4);
     printf("%d",a);
    return 0;
}
