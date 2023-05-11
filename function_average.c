#include<stdio.h>
float average (float a, float b, float c)
{
    float result;
    result = (a + b + c) / 3;
    
    return result;

}
int main()
{
    float first, second, third;
    printf("Enter first number\n");
    scanf("%f", &first);
    printf("Enter second number\n");
    scanf("%f", &second);
    printf("Enter third number\n");
    scanf("%f", &third);
    float d;
    d= average(first, second, third);
    printf("Average of number %.2f, %.2f, %.2f is %.2f", first, second, third, d);

    return 0;
}
