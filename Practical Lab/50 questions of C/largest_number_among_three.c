#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter the numbers : ");
    // scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &a, &b, &c);
    printf("Your number is : %d, %d, %d\n", a, b, c);

    if (a>b && a >c)
    {
        printf("Biggest Number is : %d", a);
    }
    else if (b>c && b >a)
    {
        printf("Biggest Number is : %d", b);
    }
    else
    {
        printf("Biggest Number is : %d", c);
    }
    
    
    return 0;
}
