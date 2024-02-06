//Write a program to sort first half in Ascending order and the Second in Descending Order.
#include<stdio.h>
void asc_desc(int *arr, int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1]; 
            }
            
        }
        
    }

    int i = size-1;
    int j = (size/2);
    while (j < i)
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];

        i--;
        j++;
    }
    

    
    
}
int main(int argc, char const *argv[])
{
    int arr[] = {11,23,42,16,83,73,59};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", size);

    asc_desc(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}


