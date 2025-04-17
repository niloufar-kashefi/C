#include <stdio.h>    // For printf
#include <stdbool.h>  // For using bool, true, and false

int main() {
    // Declare and initialize variables of different data types
    int x = 123;
    float y = 12.5f;
    char z = 'f';
    bool w = true;

    // Print the values
    printf("x = %d\n", x);
    printf("y = %.2f\n", y);
    printf("z = %c\n", z);
    printf("w = %s\n", w ? "true" : "false");

    // Print the size of each variable using sizeof
    printf("\n--- Size of each variable (in bytes) ---\n");
    printf("Size of x (int): %zu bytes\n", sizeof(x));
    printf("Size of y (float): %zu bytes\n", sizeof(y));
    printf("Size of z (char): %zu bytes\n", sizeof(z));
    printf("Size of w (bool): %zu bytes\n", sizeof(w));

    // Print the size of each type directly
    printf("\n--- Size of each type (in bytes) ---\n");
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of bool: %zu bytes\n", sizeof(bool));

    return 0;
}

