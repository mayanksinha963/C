//Consecutive sum between two number input by user

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int first, second, new_num, sum=0;
    printf("Enter first number\n");
    scanf("%d", &first);
    printf("Enter second number\n");
    scanf("%d", &second);
    new_num= first;
    printf("You want consecutive sum between %d to %d\n", first, second);
    
    do
    {
        first++;
        sum +=first;
    } while (first<second);
    printf("Total sum between %d to %d is %d\n", new_num, second, sum + new_num);
    
    return 0;
}
