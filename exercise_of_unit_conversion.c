/* Exercise of Units and Conversions

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters

*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float kmstomiles = 0.621371;
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokgs = 0.453592;
    float inchestometer = 0.0254;
    char input;
    float first, second;
    printf("    Enter Q to Quit the processing\n\n    1- Enter 1 for converting inches to miles\n    2- Enter 2 for converting inches to foot\n    3- Enter 3 for conveting cms to inches\n    4- Enter 4 for converting pound to kgs\n    5- Enter 5 for converting inches to meters\n");
    scanf("%c", &input);
    if ((input <= '5' && input > '0') || input == 'Q')
    {
        switch (input)
        {
        case 'Q':
            printf("Quiting the processing\n");
            goto end;
            break;
        }

        printf("Enter quantity in the term of first unit\n");
        scanf("%f", &first);
        switch (input)
        {

            break;
        case '1':
            second = first * kmstomiles;
            printf("%.2f inches equal to %.2f miles", first, second);
            break;
        case '2':
            second = first * inchestofoot;
            printf("%.2f inches equal to %.2f foot", first, second);
            break;
        case '3':
            second = first * cmstoinches;
            printf("%.2f cms equal to %.2f inches", first, second);
            break;
        case '4':
            second = first * poundtokgs;
            printf("%.2f pound equal to %.2f kgs", first, second);
            break;
        case '5':
            second = first * inchestometer;
            printf("%.2f inches equal to %.2f meter", first, second);
            break;

        default:
            printf("Please enter the correct code\n");
            break;
        }
    }
    else
    {
        printf("Please enter the correct code\n");
    }
end:
    return 0;
}
