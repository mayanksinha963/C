//C program to print difference of two matrices.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int matrix1[2][2];
    int matrix2[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the [%d] [%d] of first matrix : ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
        
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the [%d] [%d] of second matrix : ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
        
    }

    printf("\nDifference of first and second matrix is :- \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int difference;
            difference = matrix1[i][j] - matrix2[i][j];
            printf("[%d] [%d] = [%d]\n", i+1, j+1, difference);
        }
        
    }
    
    return 0;
}
