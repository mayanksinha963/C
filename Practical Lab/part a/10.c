//C program to convert binary number to decimal number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int num;
    int rem;
    int power = 0;
    int dc;
    //int *ptr;

    //ptr = (int *)calloc()
    printf("Enter the binary number : ");
    scanf("%d", &num);
    //printf("%d", sizeof(num));
    //printf("%d\n", num);
    while (num != 0)
    {
        rem = num % 10;
        num =  num / 10;
        dc = rem * (pow(2, power));
        power++;
        dc++;

    }
    printf("Your decimal number is %d", dc);
    
    return 0;
}

