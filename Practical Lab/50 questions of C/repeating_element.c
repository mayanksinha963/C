//Write a program to check the repeating element in C.
#include<stdio.h>

void sort (int *arr, int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j]  - arr[j+1];
            }
            
        }
        
    }
    
}

void repeatingelement(int arr[], int size)
{
    int prev = 0;
    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        if (i < size -1 && arr[i] == arr[i+1]  && prev != arr[i])
        {
            flag = 1;
            prev = arr[i];
            i++;
        }
        if (flag)
        {
            printf("%d ", arr[i-1]);
        }
        
        
    }
    
}
int main(int argc, char const *argv[])
{
    int arr[] = { 1, 3, 4, 1, 2, 3, 5, 5, 5, 2, 2, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    

    sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    repeatingelement(arr, size);
    
    
    return 0;
}


