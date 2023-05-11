#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    printf("Number of rows you want :  ");
    scanf("%d", &number);

    for (int i = 0; i <= number; i++)
    {
        for (int j = 0; j <= number; j++)
        {
            printf("%d "  , i);
        }
        printf("\n");
    }
    
    return 0;
}
