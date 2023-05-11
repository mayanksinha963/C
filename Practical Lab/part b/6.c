//C program to check whether given number is Fibonacci or not.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int a=0, b=1, c;
    printf("Enter number to check its Fibonacci number or not : ");
    scanf("%d", &n);

    if (n==0 || n==1){
        printf("%d is a Fibonacci number.\n", n);
    }
    else
    {
        c=1;
        while (c < n)
        {
            a = b;
            //printf("%d\n",a);
            b = c;
            //printf("%d\n",b);
            c= a + b;
            //printf("%d\n",c);
        }
        if (c == n)
        {
            printf("%d is a Fibonacci Number.", n);
        }
        else 
        
        
        {
            printf("%d is not a Fibonacci Number.\n", n);
        }
        
        
        
    }

    return 0;
}
