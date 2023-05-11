#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number to check it is divisible by 97 or not\n");
    scanf("%d", &num);

    if (num%97 != 0)
    {
        printf("Number is not divisible by 97\n");
    }
    else {
        printf("Number is divisible by 97\n");
    }
    
    return 0;
}
