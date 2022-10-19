/*
    Love you how much
    Demonstrate loop with while
    Daniel Cordova-Guzman
    October 10, 2022
*/
#include <stdio.h>
 int main(){
    int repeat = 0;
    printf("How Strong is your love 1-10: ");
    scanf("%d", &repeat);
    printf("\nI love you very");
    while (repeat > 0)
    {
        printf("\n very");
        repeat--;
    };
    printf(" much.\n\n");
    return 0;
 }