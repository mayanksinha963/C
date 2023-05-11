#include<stdio.h>
int main(int argc, char const *argv[])
{
    float celsius;
    printf("Enter the temperature in celsius\n");
    scanf("%f", &celsius);

    printf("Temperature in farenheight will be %f", celsius/5*9+32);
    return 0;
}
