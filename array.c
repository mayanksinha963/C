#include<stdio.h>
int main(int argc, char const *argv[])
{
    int mark[4]= {64, 97, 87, 92};
    // mark[0]= 64;
    // mark[1]=97;
    // mark[2]=87;
    // mark[3]=92;
    for (int i = 0; i < 4; i++)
    {
        printf("Your marks is %d\n", mark[i]);
    }
    
    return 0;
}
