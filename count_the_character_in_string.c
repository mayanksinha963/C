#include<stdio.h>
#include<string.h>
int character(char* string){
    char* a= string;
    //printf("%s", a);
    int i = 0;
    for (; *a != '\0'; a++)
    {
        if (("%s", *a) == ' ')
        {
            NULL;
        }
        else{
        *a = *(a);
        i++;
          }
    }
        printf("%d",i);
    


}
int main(int argc, char const *argv[])
{
    char array[100];
    printf("Enter sentence to count character (white space is excluded)\n");
    gets(array);
    character(array);
    //printf("Hello %s", array);
    return 0;
}
