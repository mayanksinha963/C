//Write a program containing functions that counts the number of positive integers in an array
#include<stdio.h>
int number(int* positive, int n) {
    int count = 0;
    //printf("%d\n",positive);
    for (int i = 0; i < n; i++)
    {
    
        if (positive [i] > 0)
        {
            count ++;

        }
        
    }
    printf("%d\n", count);    
    return count;
}
int main(int argc, char const *argv[])
{
    int arr [] = {4,-2,5,-5,5};
    int n;
   // n= sizeof(arr)/ sizeof (arr[0]);
   // printf("%d", n);
    number (arr,5);
    return 0;
}
