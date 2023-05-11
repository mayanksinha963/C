#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr [4];
    int* ptra = arr;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d\n", i+1);
        scanf("%d", ptra);
        ptra++;
    }
    for (int i = 0; i < 4; i++ )    
    {
        printf("The value of %d is : %d\n", i+1, arr[i]);
    }
    
    
    return 0;
}
