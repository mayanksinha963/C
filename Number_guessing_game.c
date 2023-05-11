//This is going to be fun!!  We will write a program that generates a random number and asks the player to guess it. If the player’s guess is higher than the actual number, the program displays “Lower number please.” Similarly, if the user’s guess is too low, the program prints “Higher number please.”

//When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char const *argv[])
{   
    
    
    int number, guess, attemps=1;
    srand(time(0));
    number=rand()%100 + 1 ;
    //printf("%d\n", number);
    do
    {
        printf("Guess the number\n");
        scanf("%d", &guess);
        if (guess>number)
        {
            printf("Lower number please\n");
        }
        else if (guess<number)
        {
            printf("Higher number please\n");
        }
        else 
        {
            printf("Congrats... You guess the correct number in %d attemps", attemps);
        }
        attemps++;
        
    } while (guess != number);

 
    
    return 0;

}

