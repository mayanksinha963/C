//Take name and salary of two employees as input from the user and write them to a text file in the following format:
    //    name1, 3300

     //   name2, 7700

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char name1[20];
    char name2[20];
    int salary1;
    int salary2;
    printf("Enter the name of first employee\n");
    scanf("%s", name1);
    fflush(stdin);
    printf("Enter his/her salary\n");
    scanf("%d", &salary1);
    fflush(stdin);
    printf("Enter the name of second employee\n");
    scanf("%s", name2);
    fflush(stdin);
    printf("Enter his/her salary\n");
    scanf("%d", &salary2);
    FILE *ptr;
    ptr = fopen("file_employee.txt", "w");
    fprintf(ptr, "%s, %d\n", name1, salary1);
    fprintf(ptr, "%s, %d\n", name2, salary2);

    fclose(ptr);
    
    
    return 0;
}
