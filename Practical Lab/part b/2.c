//C program to search given number using linear search technique
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int element, n, n1;
    printf("Enter the number of element : ");
    scanf("%d", &element);
    int array[element];
    printf("Enter the element\n");
    for (int i = 0; i < element; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter a number to check it is present on element or not : ");
    scanf("%d", &n);
    for (int i = 0; i < element; i++)
    {
        if (("%d", array[i])== ("%d", n))
        {
            printf("Number is present in element");
        }
        else 
        {
            printf("It is not present in element");
        }
        
    }
    
    
    
    return 0;
}
