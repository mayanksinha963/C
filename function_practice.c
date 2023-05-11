/*Write a program with three functions,

Good morning function which prints "Good Morning."
Good afternoon function which prints "Good Afternoon."
Good night function, which prints "Good night."
main() should call all of these in order 1 - 2 - 3.*/
#include<stdio.h>


    void goodmorning();
    void goodafternoon();
    void goodnight();
    int main(int argc, char const *argv[])
    {
        goodmorning();
        goodafternoon();
        goodnight();
        return 0;
    }
    
void goodmorning() {
    printf("Good Morning Mayank\n");
}
void goodafternoon() {
    printf("Good Afternoon Mayank\n");
}
void goodnight() {
    printf("Good night Mayank\n");
}
