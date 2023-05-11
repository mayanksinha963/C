// C program to find second largest and second smallest of n numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num, lar, small, element;
    printf("Enter the number of element : ");
    scanf("%d", &element);
    int array[element];
    printf("Enter the element\n");
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
    printf("The second larget number is %d\n", array[1]);
    printf("The second smallest number is %d", array[element-2]);
    
    
    
    return 0;
}
