#include<stdio.h>
int main(int argc, char const *argv[])
{
    //97 to 122
    char character;
    printf("Enter the character to check it is lowercase or not\n");
    scanf("%c", &character);
    if (character>=97 && character <= 122)
    {
        printf("It is lowercase");
    }
    else 
    {
        printf("It is uppercase");
    }

    return 0;
}
