//C program to accept two matrices of order m*n and p*q to find product of two matrices using function.

#include<stdio.h>
int matrix(int row1, int column1, int row2, int column2)

{
    int matrix1[row1][column1];
    int matrix2[row1][column1];
    int matrix3 [row1][column2];
    int i;
    int j;
    int k;
    int sum=0;
    if (column1 != row2)
    {
        printf("Multiplication of matrix is not possible\n");
    }
    else 
    {
        printf("\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                printf("Enter the (%d) (%d) of first matrix  ", i+1, j+1);
                scanf("%d", &matrix1[i][j]);
            }
            
        }
        printf("\n");

        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                printf("Enter the (%d) (%d) of second matrix  ", i+1, j+1);
                scanf("%d", &matrix2[i][j]);
            }
            
        }
           
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                for (int k = 0; k < row2; k++)
                {
                    sum = sum + matrix1[i][k] * matrix2 [k][j];
                    
                    
                    
                }
                matrix3[i][j]= sum;
                sum=0;
            }
            
        }
        printf("Product of the matrix is :- \n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                printf("%d  ", matrix3[i][j]);
                
            }
            printf("\n");
            
        }
        

        
        
    }
    
}
int main(int argc, char const *argv[])
{
    int r1, r2, c1, c2;
    printf("Enter the rows of first matrix : ");
    scanf("%d", &r1);
    printf("Enter the column of frist matrix : ");
    scanf("%d", &c1);

    printf("\n");

    printf("Enter the rows of second matrix : ");
    scanf("%d", &r2);
    printf("Enter the column of second matrix : ");
    scanf("%d", &c2);

    matrix(r1, c1, r2, c2);
    return 0;
}
