//Write a program to read a text file character by character and write its content twice in a separate file.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr;
    FILE *ptr1;
    char c;
    ptr = fopen("file_separate_file.txt", "r");
    ptr1 = fopen("file_separate_file_copy.txt", "w");
    c= fgetc(ptr);
    while (c != EOF)    
    {
        fputc(c, ptr1);
        fputc(c, ptr1);
        c = fgetc(ptr);
    }
    fclose(ptr);
    fclose(ptr1);
    

  
    

    
    return 0;
}
