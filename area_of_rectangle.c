#include<stdio.h>

int main(int argc, char const *argv[])
{
    int length_a, length_b;
    printf("Enter the length of one side\n");
    scanf ("%d", &length_a);

    printf("Enter the lenth of another side\n");
    scanf("%d", &length_b);

    printf("Area of given rectangle is %d unit sq.", length_a * length_b);
    return 0;
}
