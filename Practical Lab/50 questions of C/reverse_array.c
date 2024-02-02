//Write a program to reverse an array
#include<stdio.h>
void reverse (int *arr, int n)
{
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }
    
}
int main(int argc, char const *argv[])
{
    int arr[5] = {1,2,3,4,5};
    reverse(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}
