//C program to convert decimal number to binary number.

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int num;
    int *ptr;
    int rem;
    int i=0;
    printf("Enter the decimal number : ");
    scanf("%d", &num);
    //printf("%d", num);
    ptr = (int *)malloc(num * sizeof(int));

    while (num !=0)
    {
        rem = num % 2;
        num = num/2;
        ptr [i] = rem;
        //printf("%d", ptr[i]);
        i++;
        
    }
    printf("Your binary number is : ");
    for (int j = i - 1; j>=0 ; j--)
    {
        printf("%d", ptr[j]);
    }
    


    return 0;
}
