#include<stdio.h>

int fibonaccirecursion(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibonaccirecursion(n-1) + fibonaccirecursion(n-2);
    
}


int fibonacciiteration(int n)
{
    int result, first =0, second=1;
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            result = i;
        }
        else
        {
            result = first + second;
            // second = first;
            // first = result;
            first = second;
            second = result;
        }
        printf("%d ",result);
    }
    printf("\n");
    return result;
}

int main(int argc, char const *argv[])
{
    int n =4;
    int fibresultr = fibonaccirecursion (n-1);
    printf("%d\n", fibresultr);
    int fibresulti = fibonacciiteration(n);
    printf("%d\n", fibresulti);
    return 0;
}
