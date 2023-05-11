#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num[2] [4]={{63, 64, 89, 97}, {97, 56, 62, 98}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of %d, %d element of array is %d\n", i, j, num [i] [j]);
        }
        
    }
    int a,b;
    printf("Enter the value of element you want from array\n");
    scanf("%d %d", &a, &b);
    //scanf("%d", &b);
    printf("%d", num[a] [b]);
    return 0;
}
