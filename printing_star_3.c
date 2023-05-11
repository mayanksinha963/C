#include <stdio.h>
int main(int argc, char const *argv[])
{
    int row=5;
    char star = '*';
    int num;
    //printf("Enter the no. of rows you want\n");
    //scanf("%d", &row);
    
    printf("Type 1 for triangular star pattern or Type 2 for reversed triangular pattern\n");
    scanf("%d", &num);
    if (num == 1)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    else if (num == 2){
    for (int i = row; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%c", star);
        }
        printf("\n");
    }
    }
    else {
        printf("Please input the correct code\n");
    }

    return 0;
}
