//C program to swap two numbers using function and pointers.

#include<stdio.h>
void swap (int *i, int *ii)
{
    int temp;
    temp = *i;
    *i = *ii;
    *ii = temp;

}

int main(int argc, char const *argv[])
{
    int first, second;
    printf("Enter the first number  : ");
    scanf("%d", &first);
    printf("Enter the second number : ");
    scanf("%d", &second);
    printf("Before swapping\n");
    printf("First number =  %d\n", first);
    printf("Second number = %d\n", second);

    swap(&first, &second);
    printf("After swapping\n");
    printf("First number =  %d\n", first);
    printf("Second number = %d\n", second);
    return 0;
}

