#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("You entered %d as age\n", age);

    if (age>=18)
    {
        printf("You can vote!!\n");
    }
    else if (age>10)
    {
        printf("You are between 10 to 18... So wait for %d year", 18-age);
    }
    
    else {
        printf("You cannot vote!!\n");
    }

    

    return 0;
}
