/*
    Daniel Cordova-Guzman
    If and relations and flow control
    October 18, 2022
*/
#include <stdio.h>
int main(){
    int speed;
    printf("\nEnter your speed as an integrer:");
    scanf("%d", &speed);
    if (speed < 65)
        printf("\nNo speeding Ticket\n\n");
    else
        printf("\nSpeeding Ticket\n\n");
    return 0;
}