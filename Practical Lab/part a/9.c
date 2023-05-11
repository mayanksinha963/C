//C program to generate Fibonacci series up to n numbers
#include<stdio.h>
int fibonacci(int num) {
    int a;
    if (num == 0)
    {
        return 0;
    }
    else if ( num == 1)
    {
        return 1;
    }
    else {

    a= fibonacci(num - 1) + fibonacci (num - 2);
    return a;
    }
}

int main()
{
    int element, i;
    printf("Enter a number you want to check present in fibonacci series or not. \n");
    scanf("%d", &element);
    //printf("Fibonaaci series is :  ");
    for ( i = 1; i <= element; i++)
    {
        fibonacci(i);
        if (("%d", element) == fibonacci(i))
    {
        printf("%d is present in fibonacci series.\n", element);
        goto end;
    }
    
    }
    if (("%d", element) != fibonacci(i))
    {
        printf("%d is not present in fibonacci series.\n", element);
    }
    end :
        NULL;

    
    return 0;
}
