#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    
    
    printf("Enter number\n");
    scanf("%d", &num);
    //printf("%d", num);
    
    
    for (int j = 0; j <= num; j++)
    {
        
    
    for (int i = 0; i < (2 * j -1); i++)
    {
        printf("*");
    }
        printf(" \n");
    }
    
    return 0;
}
