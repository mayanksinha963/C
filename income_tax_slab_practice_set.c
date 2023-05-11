#include<stdio.h>
int main(int argc, char const *argv[])
{
    float tax, income;
    printf("Enter your income\n");
    scanf("%f", &income);
    printf("%7.2f\n", income);
    if (income >=250000 && income <= 500000)
    {
        printf("You have to pay %7.2f tax till 26 Jan\n", 0.05 * (income- 250000));
    }
    else if (income >= 500000 && income <= 1000000)
    {
        printf("You have to pay %7.2f tax till 26 Jan\n", 0.2 * (income- 500000));
    }
    else if (income >= 1000000)
    {
        printf("You have to pay %7.2f tax till 26 Jan\n", 0.2 * (income- 1000000));
    }
    else 
    {
        printf("Your income is less than 250000... So you don't have to pay taxes.\n");
    }
    return 0;
}
