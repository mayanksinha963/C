#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    int projects;
    char position[50];
    float feedback;
} Mayank, Dhruv, Saurabh;
int main(int argc, char const *argv[])
{
    int id;
    printf("Enter the id of employee\n");
    scanf("%d", &id);

    strcpy(Mayank.name, "Mayank Sinha");
    Mayank.projects = 99;
    strcpy(Mayank.position, "CEO");

    strcpy(Dhruv.name, "Dhruv Yadav");
    Dhruv.projects = 99;
    strcpy(Dhruv.position, "Vice President");

    strcpy(Saurabh.name, "Saurabh Srivastava");
    Saurabh.projects = 99;
    strcpy(Saurabh.position, "HRs");

    if (("%d", id) == 1)
    {
        printf("Name of the employee is %s\n", Mayank.name);
        printf("No. of projects done by employee is : %d\n", Mayank.projects);
        printf("Employee is the %s of the company\n", Mayank.position);
        printf("Rate out of 5 star to %s : ", Mayank.name);
        scanf("%f", &Mayank.feedback);
    }
    else if (("%d", id)==2)
    {
        printf("Name of the employee is %s\n", Dhruv.name);
        printf("No. of projects done by employee is : %d\n", Dhruv.projects);
        printf("Employee is the %s of the company\n", Dhruv.position);
        printf("Rate out of 5 star to %s : ", Dhruv.name);
        scanf("%f", &Dhruv.feedback);
    }
    else if (("%d", id)==3)
    {
        printf("Name of the employee is %s\n", Saurabh.name);
        printf("No. of projects done by employee is : %d\n", Saurabh.projects);
        printf("Employee is the %s of the company\n", Saurabh.position);
        printf("Rate out of 5 star to %s : ", Saurabh.name);
        scanf("%f", &Saurabh.feedback);
        
    }
    else {
        printf("Please enter the correct employee id\n");
    }
    
    return 0;
}

