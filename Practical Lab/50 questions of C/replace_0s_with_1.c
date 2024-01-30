//Replace all 0s with 1
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Before swapping : ");
    printf("%d\n", n);

    int ans = 0, i=0;

    while (n != 0)
    {
        int l = n % 10;
        if (l == 0)
        {
            l = 1;
        }
        ans = ans + pow(10, i) * l;
        n = n/10;
        i++;
    }

    printf("%d", ans);
    
    return 0;
}
