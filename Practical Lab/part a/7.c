//C program to print and count prime numbers from 2 to n.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int result;
    int count =0;
    printf("Enter number to count prime number\n");
    scanf("%d", &num);
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            result =1;
        }
        else 
        {
            count++;
        }
        
    }
    printf("%d", count-1);
    
    return 0;
}

