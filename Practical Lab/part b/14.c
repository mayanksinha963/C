//C program to accept employee information and display the same using structure

#include<stdio.h>
#include<string.h>
typedef struct employee
{
    char name[25];
    int id;
    float salary;
}employee;

int main(int argc, char const *argv[])
{
    printf("Please feed the detail of employee.\n");
    employee emp;
    printf("Enter the name of employee : ");
    gets(emp.name);
    printf("Enter the id of employee : ");
    scanf("%d", &emp.id);
    printf("Enter the salary of the employee : ");
    scanf("%f", &emp.salary);

    printf("\nDetail of the employee :-\n");
    printf("Name of the employee    = %s\n", emp.name);
    printf("Id of the employee      = %d\n", emp.id);
    printf("Salary of the employee  = %.2f\n", emp.salary);
    return 0;
}

