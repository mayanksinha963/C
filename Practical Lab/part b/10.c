//C program to find NCR and NPR using function.

#include<stdio.h>
int permutation(int n,int r)
{
int sub;
sub = n-r;

int i=0;
int factorial1 =1;
int factorial2 = 1;
int result;
for (int i = 1; i <= n; i++)
{
    factorial1 = factorial1 * i;
    
}
    

for (int i = 1; i <= sub; i++)
{
    factorial2 = factorial2 * i;
}
    
result = factorial1 / factorial2;
// printf("%d\n", result);
return result;
}

int combination (int n, int r)
{
    int sub;
    sub = n-r;
    int i=1;
    int factorial1 = 1;
    int factorial2 = 1;
    int factorial3 = 1;
    int result;

for (int i = 1; i <= n; i++)
{
    factorial1 = factorial1 * i;
}
for (int i = 1; i <= r; i++)
{
    factorial2= factorial2 * i;
}
for (int i = 1; i <= sub; i++)
{
    factorial3 = factorial3 * i;
}
result = factorial1 / (factorial2 * factorial3);
// printf("%d\n", result);

return result;
}


int main(int argc, char const *argv[])
{
    int n, r;
    printf("Enter total number of item in the set : ");
    scanf("%d", &n);

    printf("Enter the item taken for the permutation : ");
    scanf("%d", &r);
    permutation(n, r);
    printf("Permutation of (%d, %d) is %d\n", n, r, permutation(n,r));

    combination(n,r);
    printf("Combination of (%d, %d) is %d\n", n, r, combination(n,r));
    return 0;
}
