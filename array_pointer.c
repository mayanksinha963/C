#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr [4]= {4,5,6,7};
    int* arrayptr =  arr;
    printf("The value of 1 element is %d\n", arr [0]);
    printf("The address of 1 element is %d\n", arr);
    printf("The address of 1 element is %d\n", &arr);    
    printf("The address of 1 element is %d\n", &arr[0]);
    printf("The address of 2 element is %d\n", arr +1);
    printf("The address of 2 element is %d\n", &arr[1]);
    printf("\n \n \n");
    printf("The value of 1 element is %d\n", *arrayptr);
    printf("The value of 2 element is %d\n", arr[1]);
    printf("The value of 2 element is %d\n", *arrayptr +1);
    printf("The value of 3 element is %d\n", *arrayptr +2);
    
    return 0;
}
