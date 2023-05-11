#include<stdio.h>
//Normal Structure
struct student 
{
    int id;
    int class;
}Mayank;

//By using typedef
typedef struct student1
{
    int id;
    int class;
} XYZ;

int main(int argc, char const *argv[])
{
    //Normal Structure
    struct student Mayank;
    Mayank.id = 1;
    Mayank.class= 13;
    printf("Mayank id is %d\n", Mayank.id);
    printf("Mayank class is %d\n\n", Mayank.class);

    //By using typedef
    XYZ Dhruv;
    Dhruv.id = 2;
    Dhruv.class = 13;
    printf("Dhruv id is %d\n", Dhruv.id);
    printf("Dhruv class is %d\n", Dhruv.class);



    return 0;
}

