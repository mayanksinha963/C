//Write a function slice() to slice a string. It should change the original string such that it is now the sliced strings. 
//Take m and n as the start and ending position for slice.

#include<stdio.h>
#include<string.h>
int slice(char* array, int m, int n){
    char a;
    m= m-1;
    //printf("%c", *(array + m));
    for (m; m <= n-1; m++)
    {
        a= *(array+ m+1);
        printf("%c", *(array + m));
    }
    return a;
}
    int main(int argc, char const *argv[]){
        char a;
        char array []= "Mayank";
        a= slice (array, 2, 4);
        //printf("%c", a);

        return 0;
    }

    
    

