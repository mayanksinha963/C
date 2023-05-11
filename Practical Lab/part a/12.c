//C program to find the roots of the quadratic equation using else if statement
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float a, b, c, discrimanant, root1, root2, ipart, rpart;
    printf("Enter the coefficient of a , b, c (enter a space between them) :  ");
    scanf("%f %f %f", &a, &b, &c);
    printf("%.2f %.2f %.2f\n", a, b, c);
    discrimanant = (b * b) - (4* a * c);
    printf("Discriminant of the quadratic equation is : %.2f\n", discrimanant);
    if (("%f", discrimanant) > 0)
    {
        root1 = (-b + sqrt(discrimanant))/(2*a);
        root2 = (-b - sqrt(discrimanant))/(2*a);
        printf("Root 1 of the equation is : %.2f\nRoot 2 of the equation is : %.2f", root1, root2);
    }
    else if (("%f", discrimanant) == 0)
    {
        root1 =  root2 = -b /(2*a);
        printf("Root of the equation is : %.2f", root1);
    }
    else 
    {
        rpart = -b/(2*a);
        ipart = sqrt(-(discrimanant))/(2*a);
        printf("Root 1 of the equation is (real part) %.2f + (imaginary part) %.2f\n", ipart, rpart);
        printf("Root 2 of the equation is (real part) %.2f - (imaginary part) %.2f\n", ipart, rpart);
    }

    
    
    return 0;
}
