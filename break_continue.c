#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, age;
    for (i=0; i<10; i++)
    {
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        if (age == 5) {
            break;
        }
        if (age > 10)
        {
            break;
        }
        if (age == 12)
        {
            continue;
        }
        printf("Mayank is good boy\n");
        
    } 
    return 0;
}
