/*
    Daniel Cordova-Guzman
    Logical Operators and short circuir evaluation
    October 18, 2022
*/

#include <stdio.h>
int main(){
    int outside, weather;
    printf("\nEnter if outside 1 true 0 false:");
    scanf("%d", &outside);
    printf("\nENter if rain 1 true 0 false:");
    scanf("%d", &weather);
    if (outside && weather)
    {
        printf("\nPlease use an umbrella.\n");
    }
    else
    {
        printf("\nDress normally.\n]n");
    }
    return 0;
}