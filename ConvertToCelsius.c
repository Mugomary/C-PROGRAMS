/*
NAME:MARY WANJIKU 
REG NO:CT100/G/26211/25
Description:CONVERTING-Fahrenheit-TO-CELSIUS
*/
#include <stdio.h>

int main() {
    float temperature, celsius;
    printf("Enter your temperature in Fahrenheit: ");
    scanf("%f", &temperature);

    
    celsius = (temperature - 32) * 5 / 9;

    printf("Your Celsius temperature is %.2f\n", celsius);
    return 0;
}
