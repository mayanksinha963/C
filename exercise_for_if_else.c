#include <stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int code;
    printf("Instruction\n");
    printf("If you opt science or math (any one subject) then you will gifted 15pt \n");
    printf("If you opt science and math both then you will gifted 45pt\n\n");
    printf("For science type code - 1\n\nFor math type code - 2 \n\nFor science and math both type code - 3 \n\n\n");
    printf("Type the code\n");
    scanf("%d", &code);

    if (code ==1, code==2)
    {
        printf("Congrats!... You received 15pt");
    }
    else if (code==3)
    {
            printf("Congrats!... You received 45pt");
    }
    else {
        printf("You enter the wrong code.... Please try again");
    }
    

    return 0;
}
