#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num ;
    int i, j;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 10; j++)
        {
            printf("Enter a number\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
        }
    
end:
    printf("Mana kiya tha na 5 input karne... Ab kya muh utha kae aae ho bhaag jao yaha sae\n");

    return 0;
}
