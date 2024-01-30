#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    double p, r, t, ci;
    printf("Enter the principal amount : ");
    scanf("%lf", &p);
    printf("Enter the rate : ");
    scanf("%lf", &r);
    printf("Enter the time : ");
    scanf("%lf", &t);

    printf("Principal amount : %.2lf\n Amount : %.2lf\n Time : %.2lf\n", p, r, t);

    ci = (p * (pow(1+(r/100), t)))- p;

    printf("Compound Interest : %.2lf", ci);

    return 0;
}
