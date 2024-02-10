#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",size);

    int sum = 0;
    int maxi = arr[0];

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        if (maxi < sum)
        {
            maxi = sum;
        }
        
        if (sum < 0)
        {
            sum = 0;
        }
        
    }
    printf("Maximu sum : %d", maxi);
    return 0;
}
