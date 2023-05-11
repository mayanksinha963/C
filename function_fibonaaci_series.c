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
    printf("Enter a number of element you want in series \n");
    scanf("%d", &element);
    printf("Fibonaaci series is :  ");
    for ( i = 1; i <= element; i++)
    {
        printf("%d  ", fibonacci(i));
    }
    
    //printf("%d", num);

    
    return 0;
}
