// C program for sorting given set of numbers using bubble sort technique
// C program to find second largest and second smallest of n numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int  element;
    printf("Enter the number of element : ");
    scanf("%d", &element);
    int array[element];
    printf("Enter the element : ");
    for (int i = 0; i < element; i++)
    {
        scanf("%d", &array[i]);
        //printf("%d\n", array[i]);
    }
    for (int i = 0; i < element; i++)
    {
        
        for (int j = i+1; j < element; j++)
        {
            if (array [j] > array [i] )
            {
                int temp;
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
                
            }
            
        }
        
    }
    
    printf("Sorting of the number :  ", array[element-2]);
    for (int i = element-1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    
    
    
    
    return 0;
}
