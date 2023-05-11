//C program to find sum of the S=1+1/x+1/x2..............series upto 4 decimal places of accuracy

#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float x;
    int terms;
    float sum=0;
    float result= 0;
    printf("Enter the value of x : ");
    scanf("%f", &x);
    printf("Enter the total number of terms : ");
    scanf("%d", &terms);
    for (int i = 1; i <= terms; i++)
    {
        sum = 1 / (pow(x , i));
        //printf("%f\n", sum);
        result = result + sum;
    }
    printf("1 ");
    for (int i = 1; i <= terms; i++)
    {
        printf("+ 1/%.2f ^ %d ", x, i);
    }
    printf(" = ");
    
    printf("%.4f", 1 + result);
    return 0;
}
