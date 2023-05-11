// C program to display transpose of given m*n matrix using function.

#include<stdio.h>

int matrix(int rows, int columns)
{
    int matrix1[rows][columns];
    int matrix2[columns][rows];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the element of (%d) (%d) of matrix : ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
            //printf("%d\n", matrix1[i][j]);
            
        }
        
    }

    printf("\nMatrix before transpose :-\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d  ", matrix1[i][j]);
        }
        printf("\n");
        
    }
    


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            int temp;
            temp = matrix1[i][j];
            matrix1[i][j] = matrix2[j][i];
            matrix2[j][i] = temp;
        }
        
    }
    
    int temp;
    temp = rows;
    rows= columns;
    columns = temp;


    printf("Matrix after transpose :- \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d  ", matrix2[i][j]);
        }
        printf("\n");
        
    }
}


int main(int argc, char const *argv[])
{
    int rows, columns;
    printf("Enter the number of rows of matrix : ");
    scanf("%d", &rows);
    printf("Enter the number of columns of matrix : ");
    scanf("%d", &columns);

    matrix(rows, columns);
    return 0;
}
