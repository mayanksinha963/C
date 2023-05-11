//Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int array[10];
    for (int i = 0; i < 10 ; i++)
    {
        array [i] = i;
        printf("%d\n", array[i]);
    }
        printf("\n \n \n");
        printf("\t %d\n", *(array +2));
    return 0;
}
