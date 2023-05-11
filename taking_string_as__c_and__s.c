//Write a program to take a string as an input from the user using %c and %s. Confirm that the strings are equal.

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char st1[34];
    char st2[34];
    char c;
    int i=0;
    printf("Enter the value of first string character by character\n");
    scanf("%s", st1);
    //printf("%s\n", st1);
    printf("Enter the value of second string character by character\n");
    while (c != '\n') 
    {

        fflush(stdin);
        scanf("%c", &c);
        st2[i]=c;
        //c= st2[i];
        i++;
    }
    st2[i-1]= '\0';
    printf("Character of st1 is : %s\n", st1);
    printf("Character of st2 is : %s\n", st2);
    printf("The strcmp difference beteween st1 and st2 is %d", strcmp(st1, st2));

    

    return 0;
}
