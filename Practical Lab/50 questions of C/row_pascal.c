//Write a program to return the nth row of pascal traingle.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n = 2;
    int prev = 1;
    printf("%d ",prev);
    int ans;
    for (int i = 1; i <= n; i++)
    {
        
        
            ans = prev * (n-i+1)/i;
        
        printf("%d ", ans);
        prev = ans;
        
    }
    //

    return 0;
}
