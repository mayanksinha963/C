//. C program to find the reverse of the given number. Also sum & count the number of digits and check
//whether the given number is palindrome or not palindrome

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num, rem, count=0, reversed=0, sum=0;
    printf("Enter the number : ");
    scanf("%d", &num);
    
    while (num !=0)
    {
        rem = num % 10;
        num=  num/10;
        reversed= reversed*10 + rem;
        sum= sum + rem;     
        count++;
    }
    printf("Reverse of the given number is : %d\n", reversed);
    printf("Sum of the number is : %d\n", sum);
    printf("Count of the number is : %d\n", count);
    if (reversed == num)
    {
        printf("Number is palindrome");
    }
    else {
        printf("Number is not palindrome");
    }
    
    
    return 0;
}

