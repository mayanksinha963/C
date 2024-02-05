//Write a program to print the maximuma and minimum element in array
#include<stdio.h>

void max_min(int arr[], int size)
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max  = arr[i];
        }
    }

    printf("Min : %d; Max : %d", min, max);
    
}
int main(int argc, char const *argv[])
{
    int arr[]= {15,14,35,2,11,83};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", size);

    max_min(arr, size);
    return 0;
}
