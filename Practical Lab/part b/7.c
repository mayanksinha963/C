//C program to accept m*n matrix. To find trace and norm of square matrix and to print principle diagonal elements.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int sum=0;
    int conversion;
    int snorm=0;
    int isum=0;
    
    printf("Enter the number of rows and column of square matrix :  ");
    scanf("%d", &n);

    int matrix[n][n];
    int norm[n];
    int name;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the (%d) (%d) element of square matrix : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
            
        }        
    }
    printf("Principal diagonal element of matrix are :- \n");
    for (int i = 0; i < n; i++)
    {
        printf("(%d) (%d) = %d",i , i, matrix[i][i]);
        printf("\n");
        sum = sum + matrix[i][i];
    }
    printf("\nTrace of the matrix is %d\n", sum);

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (("%d", matrix[i][j]) < 0)
            {
                conversion = -1 * matrix[i][j];
                isum = isum + conversion;
                name = matrix[i][j];
            }
            else
            {
                conversion = matrix[i][j];
                isum= isum+ conversion;
                //printf("%d\n", conversion);
                name = matrix[i][j];
                
            }
            
            
        }
            
            snorm= snorm + isum;
            norm[j]= snorm;
            
        
            snorm= 0;
            isum=0;
            conversion=0;
            
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = j+1; i < j; j++)
        {
            if (norm [i] > norm[j])
            {
                int temp;
                temp = norm[j];
                norm[j]= norm[i];
                norm[i]= temp;
                

            }
            
            
        }
        
    }
    if (name > 0)
    {
    printf("Norm of the matrix is : %d\n", norm[n-1]);
    }
    else 
    {
        printf("Norm of the matrix is : %d\n", norm[0]);
    }
    
    
    
    
    return 0;
}
