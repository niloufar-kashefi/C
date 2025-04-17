#include <stdio.h>    // For printf and scanf

int main() {
    int number;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);  // Read the input from the user

    // --- Basic if statement ---
    // If the number is greater than 0, it's positive
    if (number > 0) {
        printf("The number is positive.\n");
    }

    // --- if-else statement ---
    // Check if the number is even or odd using modulo operator
    if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    // --- if-else if-else ladder ---
    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}

