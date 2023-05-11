#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    //printf("%d\n", sizeof(int));
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 1; i < 7; i++)
    {
        printf("Enter the value of %d element : ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i < 7; i++)
    {
        printf("The value of %d element is %d\n", i, ptr[i]);
    }
    free (ptr);
    
    
    return 0;
}
