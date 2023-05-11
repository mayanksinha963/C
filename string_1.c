#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char name[]= "Mayank Sinha";
    printf("%s\n", name);
    char first[]="Mayank";
    char last []= "Sinha";
    char full_name[20];
    printf("The strcmp for first and last is %d\n", strcmp(first, last));
    puts(first);
    char *ptr = "Virat Kholi";
    printf("%s\n", ptr);
    ptr = "Mahendra Singh Dhoni";
    printf("%s\n", ptr);
    //printf("%s\n", strcat(first, last));
    //printf("The length of first is  : %d\n", strlen(first));
   // printf("The length of first is  : %d\n", strlen(last));
    //printf("The reversed string of first is : %s\n", strrev(first));
    //strcpy(full_name, strcat(first, last));
    //printf("Full name is %s\n", full_name);


    return 0;
}
