//Write a code to print subarray
#include<stdio.h>

int minsubarray(int i, int j, int sum, int k, int arr[],int min)
{
    // static int min = 0;
    if (j==k)
    {
        // 
        return min;
    }

    if (j==i)
    {
        
        k++;
        sum = 0;
        i=k;
        
    }

    if (min > sum)
    {
        min = sum;
        // printf("%d ",i);
    }
    
    i++;
    minsubarray(i, j, sum + arr[i], k, arr, min);
    
    
    
}

int main(int argc, char const *argv[])
{
    int arr[5] = {0,2,0,-4,-7};
    int min = arr[0];
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ",arr[i]);
    // }

    int i = 0, j =5, k =0, sum =min;
    
    int minimum = minsubarray(i, j, sum, k, arr, min);
    printf("%d", minimum);
    // if (sum ==  i)
    // {
    //     printf("Hello");
    // }
    
    
    return 0;
}
