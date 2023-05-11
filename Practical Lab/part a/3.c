//C program to find sum of the S=1^2 +2^2 +3^2+................+n^2 indirect method using looping statement


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int sum = 0;
    int result=0;
    printf("Enter number to find sum\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        
        result = i * i;
        sum = sum + result;

    }
    for (int i = 1; i <= n; i++)
    if (i != n)
    {
        printf("%d ^ 2 + ", i);
    }
    else if (i == n)
    {
        printf("%d ^ 2 = ", i);
    }
    
    printf ("%d", sum);
    
    return 0;
}
