#include<stdio.h>
typedef struct complex {
    int num;
}comp;
struct complex complexnum(comp r, comp c){
    printf("The value of real part is %d\n", r.num);
    printf("The value of imaginary part is %d\n", c.num);
};
int main(int argc, char const *argv[])
{
    comp real[5];
    comp complex[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d num\n", i+1);
        scanf("%d", &real[i].num);
        
        printf("Enter the complex value for %d num\n", i+1);
        scanf("%d", &complex[i].num);
        // printf("%d", real[i].num);
        // printf("%d", complex[i].num);
    }
    for (int i = 0; i < 5; i++)
    {
        complexnum (real[i], complex[i]);
        
    }
    
    
    

    return 0;
}
