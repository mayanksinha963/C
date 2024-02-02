//Write a program to form Pascal traingle using numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n = 5;
    int ans = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n-i-1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                ans = 1;
            }
            else
            {
                ans = (ans * (i- j +1)/j);
            }
            printf("%d ", ans);
        }
        printf("\n");   
    }
    
    return 0;
}
