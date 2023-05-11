// stone paper scissor

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int comp(int num1)
{
    int comp;
    if (("%d", num1) < 33)
    {
        comp = 's';
    }
    else if (("%d", num1)>33 && ("%d", num1) < 66  )
    {
        comp =  'p';
    }
    else if (("%d", num1) > 66 )
    {
        comp = 'c';
    }
    return comp;
    
}
int game (char input, char comp)
{
    if (input == 's' && comp == 'p')
    {
        printf("Computer are the winner\n");
        
    }
    else if (input == 'p' && comp =='s')
    {
        printf("You are the winner\n");
    }
    else if (input == 'p' && comp == 'c')
    {
        printf("Computer are the winner\n");
    } 
    else if (input == 'c' && comp == 'p')
    {
        printf("You are the winner\n");
    }
    else if (input =='s' && comp == 'c')
    {
        printf("You are the winner\n");
    }
    else if (input == 'c' && comp == 's')
    {
        printf("Computer are the winner\n");
    }
    else 
    {
        printf("Game are drawn\n");
    }
    


}
int main(int argc, char const *argv[])
{
    int number;
    char input;
    int a;
    int result;
    srand(time(0));
    number= rand()%100 + 1;
    //printf("%d\n", number);
    
    a = comp (number);
    printf("%c\n", a);
    printf("Enter 's' for stone, 'p' for paper and 'c' for scissor\n");
    scanf("%c", &input);
    printf("You choose %c and Computer choose %c\n", a, input);
    result = game(input, a);
    
    
    return 0;
}

