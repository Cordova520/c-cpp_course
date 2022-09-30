/*  Char i C
    A Fundamental Type
    Daniel Cordova-Guzman
    Sept. 29, 2022
*/

#include <stdio.h>

int main(void){

    char c = 'a';

    printf("c in ASCII is %d\n", c);
    printf("c the character %c\n", c);
    printf("THree consecutive chars are: %c%c%c \n", c, c+1, c+2);
    printf("THree bell rings chars are : %c%c%c \n", '\a', '\a', '\a');
    return 0;
}