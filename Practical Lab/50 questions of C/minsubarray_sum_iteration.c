#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5] = {6,2,3,1,5};
    int min = arr[0];
    int sum;

    for (int i = 0; i < 5; i++)
    {
        sum = 0;
        for (int j = i; j < 5; j++)
        {
            sum += arr[j];
            if (min > sum)
        {
            min = sum;
        }
        }
        
        
        
    }
    
    printf("%d",min);
    return 0;
}
