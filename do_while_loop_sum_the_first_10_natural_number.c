//Write a program to sum the first ten natural numbers using a while loop

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, new_num, sum=0;
    
    printf("Enter a number\n");
    scanf("%d", &num);
    new_num = num + 10;
    //printf("%d\n", new_num);

    do
    {
        num++;
        sum +=num ;
    } while (num<new_num);
    printf("Total sum is %d\n", sum);

    for (; num < new_num; num++)
    {
        sum +=num;
    }
    printf("Your sum is %d\n", sum);
    return 0;
}
