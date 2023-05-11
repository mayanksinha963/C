//C program to accept m*n matrix to find sum of upper diagonal and lower diagonal elements
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int usum=0;
    int lsum=0;
    
    printf("Enter the number of rows and columns of square matrix : ");
    scanf("%d", &n);
    int matrix[n][n];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the (%d) (%d) element of square matrix : ", i+1, j+1 );
            scanf("%d", &matrix[i][j]);
            //printf("%d\n", matrix[n][n]);

        }
        
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <= i+1; j++)
        {
            //printf("%d %d", i, j);
            printf("Upper diagonal of matrix is : %d\n", matrix[i][j]);
            usum= usum + matrix[i][j];
        }
        
    }
    printf("Sum of upper diagonal of matrix is %d.\n\n", usum);
    

    for (int j = 0; j < n-1; j++)
    {
        for (int i = j+1; i <= j+1; i++)
        {
            printf("Lower Diagonal of matrix is : %d\n", matrix[i][j]);
            lsum= lsum + matrix[i][j];
        }
        
    }
    printf("Sum of upper diagonal of matrix is %d.\n\n", lsum);

    
    
    

    return 0;
}
