//Check wheather no. is palindrome or not
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n = 13431;
    int n1= n, n2 = n;
    int flag = 0;

    // printf("%d, %d", n1, n2);
    int nlength = floor(log10(n)) + 1;
    // printf("%d", nlength);
 
    int new = pow(10, nlength-1);
    // printf("%d", new);

    for (int i = 0; i < nlength/2; i++)
    {
        int r1= n1/new;
        int r2 = n2%10;
        // printf("%d, %d\n", r1, r2);
        if (r1 != r2)
        {
        
           flag =1;
           break; 
        }
        n1 %= new;
        new /= 10;
        n2 /= 10;
    }
    
    if(flag == 0)
    {
        printf("No. is palindrome");
    }
    else
    {
        printf("No. is not palindrome");
    }
    
    return 0;
}
