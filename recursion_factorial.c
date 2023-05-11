#include<stdio.h>
int factorial (int number){
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else {
        return (number * factorial (number -1));
    }
}
    int main()
    {
        int num;
        printf("Enter number for factorial\n");
        scanf("%d", &num);
        printf("Factorial of given number is %d", factorial(num));
        return 0;
    }
    