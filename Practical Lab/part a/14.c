//C program to find largest and smallest of n numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int element, num, lar, small;
    printf("Enter the number of element :  ");
    scanf("%d", &element);
    printf("Enter the first number :  ");
    scanf("%d", &num);
    lar = num;
    small = num;
    for (int i = element; i > 1; i--)
    {
        printf("Enter the another number : ");
        scanf("%d", &num);
        if (num > lar)
        {
            lar = num;
        }
        if (num < small)
        {
            small = num;
        }
        
    }
    printf("Larest number is %d\n", lar);
    printf("Smallest number is %d\n", small);

    return 0;
}
