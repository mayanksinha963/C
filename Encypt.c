//Write a program to encrypt a string by adding 1 to the ASCII value of its characters.
#include<stdio.h>
#include<string.h>
int encrypt (char* c) {
    char* string = c;
    for (; *string != '\0'; string++)
    {
        *string = *string + 1;
        
    }
    
}
int decrypt(char* b) {
    char* string = b;
    // while (*string != '\0')
    // {
    //     *string = *string - 1;
    //     string--;
    // }
    for (; *string != '\0'; string++)
    {
        *string = *string -1;
    }
    
    
}
int main(int argc, char const *argv[])
{
    char c[100];
    printf("Enter data for encryption\n");
    gets(c);
    encrypt(c);
    printf("Encrypted string is %s\n", c);
    
    decrypt(c);
    printf("%s", c);
    //printf("Decypt is %s",c);
    return 0;
}

