#include <stdio.h>
int main(int argc, char const *argv[])
{
    int first, second, third, fourth;

    printf("Enter the first number\n");
    scanf("%d", &first);

    printf("Enter the second number\n");
    scanf("%d", &second);

    printf("Enter the third number\n");
    scanf("%d", &third);

    printf("Enter the fourth number\n");
    scanf("%d", &fourth);

    printf("Your number is %d%d%d%d\n", first, second, third, fourth);

    if (first > second && first > third && first > fourth)
    {
        printf("%d", first);
        if (second > third && second > fourth)
        {
            printf("%d", second);
            if (third > fourth)
            {
                printf("%d", third);
                printf("%d", fourth);
            }
            else if (fourth>third);
                printf("%d", fourth);
                printf("%d", third);
        }
        else if (third > second && third > fourth)
        {
            printf("%d", third);
            if (second > fourth)
            {
                printf("%d", second);
                printf("%d", fourth);
            }
            else if (fourth>second)
            {
                printf("%d", fourth);
                printf("%d", second);
            }
            
        }
        else if (fourth > second && fourth > third)
        {
            printf("%d", fourth);
            if (second>third)
            {
                printf("%d", second);
                printf("%d", third);
            }
            else if (third>second)
            {
                printf("%d", third);
                printf("%d", second);
            }
            
        }
    }


   

    
    
    
    return 0;
}
