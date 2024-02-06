#include<stdio.h>
void sum_subset(int arr[], int size, int i, int sum)
{
    if (i>size)
    {
        printf("%d ", sum);
        return;
    }
    sum_subset(arr, size, i+1, arr[i] + sum);
    sum_subset(arr, size, i+1, sum);
    
}
int main(int argc, char const *argv[])
{
    int arr[] = {-2,2,1,1,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    sum_subset(arr, size-1, 0, sum);

    // printf("%d",size);
    return 0;
}
