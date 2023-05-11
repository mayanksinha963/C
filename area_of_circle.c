#include<stdio.h>
int main(int argc, char const *argv[])
{
    float r;
    float a= 3.14;
    float h;
    printf("Enter the radius of circle\n");
    scanf("%f", &r);

    printf("Area of given circle is %f\n", a*r*r);
    

    printf("To know the volume of cylinder... Enter height...\n");
    scanf("%f", &h);

    printf("Volume of cylinder is %f", a*r*r*h);
    return 0;

}
