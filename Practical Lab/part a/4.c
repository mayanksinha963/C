//C program to find sum of the S=1-2+3-4+5……….+n series by indirect method using looping statement

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int sum =0;
    int sum1 = 0;
    printf("Enter number for sum\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i+=2)
    {
        sum = sum + i;
        //printf("%d", sum);
    }
    //printf("\n");
    for (int i = 0; i <= n; i+=2)
    {
        sum1 = sum1 + i;
        //printf("%d", sum1);
    }
    printf("Your sum is :-\n");
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("1");
        }
        else if (i % 2 ==0)
        {
            printf(" - %d", i);
        }
        
        else if (i % 2 != 0 && i != 1)
        {
            printf(" + %d", i);
        }
        
    }
    
    
    printf(" = %d", sum - sum1);
    
    return 0;
}
