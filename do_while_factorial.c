#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num, factorial=1, i=0; 
    printf("Enter a number\n");
    scanf("%d", &num);
    //printf("%d", num);
    //i=num--;
    do
    {
        i++;
        //printf("%d\n", i);
        
        factorial = factorial* i;
        

        

    }while (i<num);
    printf("factorial of %d is %d", num, factorial);
    return 0;
}
