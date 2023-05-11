#include<stdio.h>
void display(); //Function prototype
int main(int argc, char const *argv[])
{
    int a;
    display();
    printf("I am function call");
    return 0;
}

void display ()
{
    printf("I am function definition\n");
}

