#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav_word;
    char name[20];
};
int main(int argc, char const *argv[])
{
    struct student Mayank = {1, 100, 'R',"Mayank Sinha"};
    printf("Employee id is %d\n", Mayank.id);
    printf("Employee marks is %d\n", Mayank.marks);
    printf("Employee favourite wrod is %c\n", Mayank.fav_word);
    printf("Employee name is %s\n", Mayank.name);
    return 0;
}
