#include<stdio.h>
#include<string.h>
void arrayRev(int* arg1, int n) {
    int temp;
    
     
    // printf("%s", *a);
    for (int i = 0; i < n/2; i++)
    {
        temp = arg1[i];
        arg1[i]= arg1[(n-1)-i];
        arg1[(n-1)-i]= temp;
        
    }
    //printf("%d  ", arg1[i]);
    


}
int main(int argc, char const *argv[])
{
    int array[]= {1,2,3,4};
    printf("Before reversing the variable is : ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
    printf("After reversing the varible is   : ");
    
    arrayRev(array, 4);
    for (int i = 0; i < 4; i++)
    {
      printf("%d  ", array[i]);
    }
    
    return 0;
}
