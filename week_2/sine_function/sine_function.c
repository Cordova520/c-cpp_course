/*  Sine Function
    Daniel Cordova-Guzman
    September 30, 2022
    Write a program that can give the sine of a value between 0 and 1 (non inclusive). You will be graded based on whether the program can output a value in the correct range and whether your code is well-formatted and logically correct.
*/

#include <stdio.h>
#include <math.h>

int main(void){

    double value;
    double sine;

    printf("Enter the value which you would like to know the value of sine of: ");
    scanf("%lf", &value);

    sine = sin(value);

    printf("The sine of %lf is: %lf\n", value, sine);

    return 0;
}