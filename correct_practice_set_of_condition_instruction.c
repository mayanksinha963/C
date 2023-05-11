#include<stdio.h>
int main(int argc, char const *argv[])
{
    int math,physics,chemistry;
    float total, percentage;
    printf("Enter your math marks\n");
    scanf("%d", &math);
    printf("Enter your physics marks\n");
    scanf("%d", &physics);
    printf("Enter your chemistry marks\n");
    scanf("%d", &chemistry);
    total= math + physics + chemistry;
    printf("Your total marks is %.2f\n", total);
    percentage= total/3;
    printf("Your Percentage is %.2f\n", percentage);
    if (percentage>=40 &&  math>33 && physics> 33 && chemistry > 33)
    {
        printf("You are pass\n");
    }
    else {
        printf("You are fail");
    }
    

    return 0;
}
