// simple c program
/*
 name:Mary wanjiku
 reg:CT100/G/26211/25
 des:showing my profile
 */
#include <stdio.h>

int main() {
    float weight, height;
    long phone;

    printf("Enter your weight : ");
    scanf("%f", &weight);

    printf("Enter your phone number: ");
    scanf("%ld", &phone);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("\n--- Your Details ---\n");
    printf("Weight: %.2f \n", weight);
    printf("Phone: %ld\n", phone);
    printf("Height: %.2f \n", height);

    return 0;
}
