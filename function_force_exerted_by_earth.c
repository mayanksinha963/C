#include<stdio.h>
float force (float mass)
{
    float a;
    a= mass * 9.8;
    return a;
}
int main()
{
    float mass;
    printf("Enter mass to calculate force exerted by earth\n");
    scanf("%f", &mass);
    printf("Force exerted on mass %.2f by earth is %.2f\n", mass, force(mass));
    return 0;
}
