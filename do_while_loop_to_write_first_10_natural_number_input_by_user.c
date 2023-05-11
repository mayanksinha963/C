//Write a program to write 10 first natural number input by user.


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num, new_num;
    printf("Enter a num\n");
    scanf("%d", &num);
    new_num= num+11;
    //printf("%d\n",new_num);
    do
    {
        printf("%d\n", num++);
        //num =  num+1;
    } while (num < new_num);
    
    return 0;
}
