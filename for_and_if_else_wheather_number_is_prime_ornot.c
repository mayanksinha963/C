#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number, i=2, prime= 1;
    printf("Enter a number to check its prime or not\n");
    scanf("%d", &number);
    //printf("%d\n", number);
    for ( i = 2; i < number; i++)
    {
        if (number %i == 0)
        {
            prime = 0;
            
            
        }
        
    }
    if (prime == 0)
    {
        printf("%d is a prime number", number);
    }
    else {
        printf("%d is a composite number", number);
    }
    
    return 0;
}
