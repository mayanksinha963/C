#include<stdio.h>
float celsius (float result);
int main()
{
    float temp;
    printf("Enter temperature in celsius\n");
    scanf("%f", &temp);
    printf("Temperature in farenheight will be %.2f", celsius(temp));
    return 0;
}
float celsius (float result)
{
    float a;
    a = result * 1.8 +32;
    return a;
}
