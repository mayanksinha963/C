//Write a program to check whether a given character is present in a string or not.
#include <stdio.h>
#include <string.h>
int character(char *string, char *given)
{
    char *a = string;
    char *b = given;
    //printf("%s\n", a);
    //printf("%s\n", b);
    for (; *a != '\0'; a++)
    {
        *a = *(a + 0);
        if (("%s", *a) == ("%s", *b))
        {
            printf("Yes character present in string\n");
            goto yes;
        }
        // else
        // {
        //     printf("Character does not present in string\n");
        //     goto no;
        // }
    }
printf("Character does not present in strng\n");
 yes:
 NULL;
// printf("Yes\n");
// no:
// printf("No\n");
}
int main(int argc, char const *argv[])
{
    char array[] = "Myself Mayank Sinha";
    char input[49];
    printf("Enter the character to check wheather its present in string or not (Cases sensistive)\n");
    gets(input);
    character(array, input);
    //printf("%s", array);
    return 0;
}
