/*  Peer-graded Assignment: Fix Dr. P's mistake (week 2)
    Daniel Cordova-Guzman
    September, 30, 2022
    The program has a mistake. Redo the program in a text file and upload it by clicking "upload file" below. Your peers will then review your submission to see whether you have appropriately fixed the errors.
*/

#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
    int radius;
    printf("Enter radius:");
    scanf("%d", &radius);
    //printf("volume is : %d \n\n", 4 *radius*radius*radius/3 );
    printf("volume is : %f \n\n", 4 *radius*radius*radius*PI/3 );
    return 0;
}