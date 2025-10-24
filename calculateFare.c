/*
NAME:MARY WANJIKU 
REG NO:CT100/G/26211/25
Description:CALCULATING-FARE.
*/
#include <stdio.h>

int main() {
    float DISTANCE, FARE;
    printf("Enter your DISTANCE in KILOMETER: ");
    scanf("%f", &DISTANCE);

    FARE = DISTANCE * 50;
    printf("Your FARE  is %.2f\n", FARE);
    return 0;
}
