//Write a function SumVector which returns the sum of two vectors passed to it. The vectors must be two-dimensional.
#include<stdio.h>
typedef struct sum
{
    int v1;
    int v2;
}add;

struct sum sumVectorx (add c)
{
add result;
result.v1  = c.v1 + c.v2;
};
struct sum sumVectory (add y)
{
    add result;
    result.v1  = y.v1 + y.v2;
}


int main(int argc, char const *argv[])
{
    add x;
    add y;
    add plus;
    printf("Enter the first number of x axis\n");
    scanf("%d", &x.v1);
    printf("Enter the second number of x axis\n");
    scanf("%d", &x.v2);
    plus = sumVectorx(x);
    printf("The sum of x axis is %d ", plus);
    
    
    printf("\nEnter the first number of y axis\n");
    scanf("%d", &y.v1);
    printf("Enter the second number of y axis\n");
    scanf("%d", &y.v2);
    printf("The sum of y axis is ");
    plus= sumVectory(y);
    printf("%d\n", plus);
    
    


    return 0;
}
