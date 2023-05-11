#include<stdio.h>
int main(int argc, char const *argv[])
{
int math, chemistry, physics;
int total;
float percentage;
    printf("Enter your math marks\n");
    scanf("%d", &math);
    if (math > 100)
    {
        printf("Enter the valid marks and run the program again\n");
    }
    if (math<33)
    {
        printf("Your math marks are less than 33.. Hence you are fail.. Better luck next time\n");
    }
    
    
    printf("Enter your chemistry marks\n");
    scanf("%d", &chemistry);
    if (chemistry > 100)
    {
        printf("Enter the valid marks and run the program again\n");
    }
    if (chemistry<33)
    {
        printf("Your chemistry marks are less than 33.. Hence you are fail.. Better luck next time\n");
    }
    
 
    printf("Enter your physics marks\n");
    scanf("%d", &physics);
    if (physics>100)
    {
        printf("Enter the valid marks and run the program again\n");
    }
    if (physics<33)
    {
        printf("Your physics marks are less than 33.. Hence you are fail.. Better luck next time\n");
    }
    
    
    total = math + physics + chemistry;
    printf("Your total marks is %d\n", total);
    percentage= total/3;
    printf("Your percentage is %.2f\n", percentage);
    if (math>33 || chemistry>33 || physics >33)
    {
        if (percentage >=40 && percentage <=100)
        {
            printf("Congrats... You are passes with %.2f", percentage);
        }
        else {
            printf("You are fail... Better luck next time!!");
        }
        
    }
   if (percentage<33)
   {
       printf("Your percentage is less than 33.. Hence you are fail... Better luck next time\n");
   }

    
    return 0;
}
