//Write a program for the cyclic rotation of array to k positions.
#include<stdio.h>

void rotate (int *arr, int size, int k)
{
 for (int i = k, j = 0; i < size; i++, j++)
 {
    arr[i] = arr[i] + arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i] - arr[j];
 }

 if ((k-size))
 {
    for (int i = size-k; i < size-1; i++)
    {
        arr[i] = arr[i] + arr[i+1];
        arr[i+1] = arr[i] - arr[i+1];
        arr[i] = arr[i] - arr[i+1];
    }
 }
 
    
}
int main(int argc, char const *argv[])
{
    int arr[] =  {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", size);
    rotate(arr, size, 1);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    



    return 0;
}


