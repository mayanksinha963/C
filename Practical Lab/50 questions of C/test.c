#include<stdio.h>
#include<string.h>
// union 
// {
//     double a;
//     int b[10];
//     char c;
// }p;

// union  p
//     {
//         int x; 
//         int y;
//     }k ={.y = 97};

    // typedef struct p* q*;

    // #if X == 3;

int main(int argc, char const *argv[])
{
    // p.y = 60;
    // printf("%d", sizeof(p));
    // printf("%d",sizeof(p));
    // union p p,b;

    // for(; ;);
    // for(; ;)
    // {
    //     printf("Hello");
    // }
    
    // printf("%d",k.y);
    // struct p p1[] = {1,2,3,4,5,6};
    // printf("%d",sizeof(p1));
    // struct student s;
    // s.no = 8;
    // // printf("%d", s.no);

    // int i =0;
    // for (int i = 0; i < 5; ++i++)
    // {
    //     printf("Hello");
    // }


    const char str1[] ="abcdef";
    const char str2[] = "fgha";

    char * mat;
    mat = strpbrk(str1, str2);
    printf("%c",*mat);

    return 0;
}
