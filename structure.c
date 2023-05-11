#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav_subject;
    char name[];
};
int main(int argc, char const *argv[])
{
    struct student Mayank, Dhruv, Saurabh;
    
        Mayank.id = 1;
        Dhruv.id = 2;
        Saurabh.id = 3; 
        Mayank.marks=100;
        Dhruv.marks=99;
        Saurabh.marks=99;
        Mayank.fav_subject= 'C';
        Dhruv.fav_subject='M';
        Saurabh.fav_subject='E';
        printf("Mayank id is %d\n", Mayank.id);
        printf("Mayank got %d marks\n", Mayank.marks);
        printf("Mayank fav subject is %c\n", Mayank.fav_subject);
        strcpy(Mayank.name, "Best student of the century");
        printf("Mayank Sinha is the %s\n", Mayank.name);
        
        

    
    
    return 0;
}

