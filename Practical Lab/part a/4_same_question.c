//C program to find sum of the S=1-2+3-4+5……….+n series by indirect method using looping statement
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int sum= 0;
    int sum1=0;
    printf("Enter the number for sum\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
            //printf("%d ", sum);
        }
        else if (i % 2 == 0)
        {
            sum1 = sum1 + i;
            //printf("%d", sum1);
        }
        
    }
    //printf("\n");
    printf("%d", sum - sum1);
    
    
    return 0;
}
