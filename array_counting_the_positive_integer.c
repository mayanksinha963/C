//Write a program containing functions that counts the number of positive integers in an array
//Write a program  that counts the number of positive integers

#include<stdio.h>
// int integer(int* positive, int n) {
//     int a;
//     if (positive > 0)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             a= i+1;
//             printf("%d\n", a);
//         }
//         return a;
        
//     }
    
//}
int main(int argc, char const *argv[])
{
    
    int arr[7] = {-1,1,0,4,-4,6,-4};
    int count= 0;
    //integer(arr, 4);
    //printf("%d\n", arr);
    for (int i = 0; i < 7; i++)
    {
        
        if (arr[i]>0)
        {
            count ++;
            
        }
        
    }
    printf("%d\n", count);

    
    
    return 0;
}

