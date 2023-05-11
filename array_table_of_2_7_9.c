//Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9, respectively
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int array [3][10];
    int* parray = &array;
    for (int i = 0; i < 10; i++)
    {
        array[0][i] = 2 * (i+1);
        printf("%d  ", array [0][i]);
    }
        printf("\n\n");
    for (int j = 0; j < 10; j++)
    {
        array[1][j]= 7* (j+1);
        printf("%d  ", array [1][j]);
    }
        printf("\n\n");
    for (int k = 0; k < 10; k++)
    {
        array[2][k] = 9* (k+1);
        printf("%d  ", array [2][k]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        //array[0][i] = 2 * (i+1);
        printf("%d  ", parray+i);
        //printf("\n");
        printf("%d  ", *parray+i);
    }
    
    return 0;
}
