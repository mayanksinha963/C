#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int flag = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Your number is : %d\n", n);
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
        
    }

    if (flag == 1)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Number is non- prime");
    }
    
    
    return 0;
}
