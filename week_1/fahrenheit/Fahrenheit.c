/*
    Homage to K&R
    Conversion of Fahrenheit to Celsius

    C = (F- 32)/1.8
    Sally Coder
    September 21, 2022
*/

#include <stdio.h>

int main(void){
    int fahreheit, celsius;
    printf("PLease enter fahrenheit as an integer:");
    scanf("%d", &fahreheit);
    celsius = (fahreheit - 32)/1.8; //note conversion
    printf("\n %d fahrenheit is %d celsius.\n", fahreheit, celsius);

    return 0;
}