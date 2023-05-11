//Write a program to modify a file containing an integer to double its value.
  //     If old value = 2, then new file value = 4

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    FILE *ptr;
    ptr= fopen("file_double_the_integer.txt", "w");
    fprintf(ptr, "%d", num*2);
    
    return 0;
}
