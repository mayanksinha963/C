#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num, result, i=1, sum=0;
    printf("Enter a number from want the sum of multiplication table\n");
    scanf("%d", &num);
  //  printf("%d", num);
    for (; i <= 10; i ++)
{
    printf("%d x %d = %d\n", num, i, num * i);
    sum +=num*i;
}
    printf("%d", sum);

    
    return 0;
}
