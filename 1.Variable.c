// C Developer Tutorial Program: Introduction to Variables (C version)

// Step 1: Include necessary libraries
#include <stdio.h>    // Standard library for input and output functions like printf
#include <stdbool.h>  // Allows use of the bool data type (true / false)
#include <string.h>   // Provides functions for working with strings (optional here)

// Step 2: Entry point of the program
int main() {
    // Step 3: Define various types of variables

    // Integer (int): stores whole numbers (no decimals)
    int age = 25;  // Example: age, item count, etc.

    // Floating Point (float): stores decimal numbers with less precision than double
    float price = 19.99f;
    // Note: The 'f' at the end tells the compiler this is a float.
    // If you omit the 'f', the value is treated as a double, which may cause a type mismatch.

    // Double: stores decimal numbers with higher precision than float
    double pi = 3.14159265359;

    // Character (char): stores a single character, enclosed in single quotes
    char grade = 'A';

    // String (char array): a sequence of characters (words, sentences)
    // In C, strings are represented as arrays of characters
    char name[] = "John Doe";

    // Boolean (bool): stores true or false values
    bool isActive = true;

    // Step 4: Output each variable using printf
    // Format specifiers in printf:
    // %d ? prints an integer
    // %f ? prints a float or double (floating-point value)
    // %c ? prints a single character
    // %s ? prints a string (character array)

    printf("Age: %d\n", age);                   // %d displays the integer value of age
    printf("Price: %.2f\n", price);             // %.2f displays price with 2 decimal places
    printf("Pi Value: %f\n", pi);            // %f displays the float value of pi
    printf("Grade: %c\n", grade);               // %c displays the character grade
    printf("Name: %s\n", name);                 // %s

return 0;  // Return 0 to indicate successful execution
}
