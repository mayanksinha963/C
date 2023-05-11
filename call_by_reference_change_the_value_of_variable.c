//Write a program to change the value of a variable to ten times its current value. Write a function and pass the value by reference.
#include<stdio.h>
void alpha (int* num) {
    int temp;
    //int* new_num;
    temp = *num * 10;
    //*new_num= temp;
    

    

}
int main(int argc, char const *argv[])
{
    
    int a = 4;
    //value (a);
    printf("The value of variable %d\n",a);
    alpha (&a);
    printf("The value of variable to ten times its current value %d\n", a);
    return 0;
}
