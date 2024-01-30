//Swap two variable without using extra variable.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y;
    printf("Enter the first number : ");
    scanf("%d", &x);
    printf("Enter the second number : ");
    scanf("%d", &y);

    printf("After swapping :-\n");
    printf("First number : %d\nSecond number : %d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Before swapping :-\n");
    printf("First number : %d\nSecond number : %d", x, y);
    return 0;
}
