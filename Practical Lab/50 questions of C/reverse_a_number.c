//Write a program to reverse a number
#include<stdio.h>

//using iteration method
int reverse_iteration(int n, int ans)
{
    while (n)
    {
        int r = n % 10;
        ans = ans * 10 + r;
        n = n/10;
    }
    return ans;
    
}

//using recursion method
int recursion (int n, int ans)
{
    if (n ==0)
    {
        return ans;
    }

    ans = ans * 10 + (n % 10);

    return recursion(n/10, ans);
    
}

int main(int argc, char const *argv[])
{
    int n = 15942;
    int ans = 0;

    int iterationans = reverse_iteration(n, ans);
    printf("Number before reverse %d\n", n);
    

    //using iteration method 
    printf("Number after reverse %d\n", iterationans);

    //using recursion method
    int recursionans = recursion(n, ans);
    printf("Number after reverse %d\n", recursionans);
    return 0;
}
