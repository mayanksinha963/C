#include<stdio.h>
int main(int argc, char const *argv[])
{
    int code;
    printf("Type code - 1 for taking admission in Imperial School\n");
    printf("Type code - 2 for taking admission in Sunbeam Academy\n");
    printf("Type code - 3 for taking admission in Jaipuriya\n");
    printf("Type code - 4 for taking admission in Other Schools\n");
    scanf("%d", &code);
    switch (code) //switch always work on interger and character... if you will type float or any experssion it will always shows error
    {
    case 1:
        printf("Thanks for taking admission in Imperial\n");
        break;
    case 2:
        printf("Thanks for taking admission in Sunbeam Academy\n");
        break;
    case 3:
        printf("Thanks for taking admission in Jaipuriya\n");
        break;
    case 4:
        printf("Best of luck for future\n");
        break;
    
    default:
        printf("Please enter correct code\n");
        break;
    }
}
