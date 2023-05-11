#include<stdio.h>
#include<math.h>
int square (int side);
int main()
{
    
    
    int side;
    printf("Enter length of square to calculate the area\n");
    scanf("%d", &side);
    printf("Area of square is %.2f\n", pow(side, 2));

    return 0;
}

