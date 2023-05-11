#include<stdio.h>
int main(int argc, char const *argv[])
{
        int number;
    printf("Enter a number\n");
    scanf("%d", &number);
    (number < 5) ? printf("Number is less than 5"): printf("Number is not less than 5"); 
    return 0;
}
