#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int new = 1634;
    int n = new;
    int x = floor(log10(n)) + 1;

    int ans = 0;

    while (n)
    {
        int r = n%10;
        ans = ans + pow(r,x);
        n = n/10;
    }
    
    if (new == ans)
    {
        printf("No. is armstrong");
    }
    else
    {
        printf("No. is not armstrong");
    }
    
    

    return 0;
}
