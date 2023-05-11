//Create an array of the multiplication table of 7 up to 10 (7x10=70). Use realloc to make it store 15 numbers(from 7x1 to 7x15).

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter number for multiplication table :  ");
    scanf("%d", &num);

    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    printf("\n\n\n");
    ptr = realloc(ptr, 15*sizeof(int));
    for (int i = 1 ; i < 16; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    free(ptr);
    
    return 0;
}
