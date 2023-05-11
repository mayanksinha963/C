#include<stdio.h>
void array(int* ptr, int n) {
    for (int i = 0; i < n; i++)
    {
        printf("The value of variable is %d\n", *(ptr + i));
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {56, 73, 94, 99};
    array(arr, 4);
    return 0;
}

    
