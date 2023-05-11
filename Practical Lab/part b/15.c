//C program to create simple marks card assuming appropriate condition

#include<stdio.h>
#include<strings.h>
int main(int argc, char const *argv[])
{
    char name[30];
    int math;
    int physics;
    int chemistry;
    int english;
    int physical;
    int count =0;
    float percentage;
    printf("Rule :-\n");
    printf("1. If your marks are less than 33 subject than you are fail in that subject.\n");
    printf("2. If your marks are less than 33 in any two subject then you are fail\n");
    printf("3. If your percentage are less than 33 then you are fail.\n\n");


    printf("Enter name of the student : ");
    gets(name);
    printf("Enter the number in math : ");
    scanf("%d", &math);
    if (math>100)
    {
        printf("Please enter the valid number.");
        return 0;
    }
    printf("Enter the number in physics : ");
    scanf("%d", &physics);
    if (physics>100)
    {
        printf("Please enter the valid number.");
        return 0;
    }
    printf("Enter the number in chemistry : ");
    scanf("%d", &chemistry);
    if (chemistry>100)
    {
        printf("Please enter the valid number.");
        return 0;
    }
    printf("Enter the number in english : ");
    scanf("%d", &english);
    if (english>100)
    {
        printf("Please enter the valid number.");
        return 0;
    }
    printf("Enter the number in physical : ");
    scanf("%d", &physical);
    if (physical>100)
    {
        printf("Please enter the valid number.");
        return 0;
    }

    printf("\n");


        if (math<33)
        {
            printf("You are fail in math\n");
            count++;
            
        }
        if (physics<33)
        {
            printf("You are fail in physics.\n");
            count++;
        }
        if (chemistry<33)
        {
            printf("You are fail in chemistry.\n");
            count++;
        }
        if (english<33)
        {
            printf("You are fail in english.\n");
            count++;
        }
        if (physical<33)
        {
            printf("You are fail in physical.\n");
            count++;
        }
        
    
    
    if (count>=2)
    {
        printf("You are fail in %d subjects. So you are not promoted.... Better luck next time.\n", count);
    }
    else
    {
        percentage = (float)(math + physics + chemistry + english + physical) /5;
        printf("\nYour percentage is %.2f\n", percentage);
        if (percentage < 33)
        {
            printf("Your percentage is not enoughing for passing... So, you are fail in this exam.");
        }
        else if (percentage >= 80)
        {
            printf("Congrats... You got A grade in exam");
        }
        else if (percentage >=60)
        {
            printf("You passed the exam with B grade");
        }
        else if (percentage >=45)
        {
            printf("You passed the exam with C grade");
        }
        else if (percentage >= 33)
        {
            printf("You passed the exam with D grade");
        }
        
    }
    
    

    return 0;
}
