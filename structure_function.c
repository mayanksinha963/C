#include<stdio.h>
struct student 
{
    int id;
};
int main(int argc, char const *argv[])
{
    struct student mayank;
    struct student *ptr;
    ptr = &mayank;
    (*ptr).id = 22;
    //printf("%d\n", mayank.id);
    ptr->id = 22;
    printf("%d\n", mayank.id);
    return 0;
}

