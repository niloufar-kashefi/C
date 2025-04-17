#include <stdio.h>    // For printf

int main() {
    // Declare and initialize variables
    int a = 10;
    int b = 5;
    int c = 2;
    int d = 4;

    // Display variable values
    printf("a is: %d\nb is: %d\nc is: %d\nd is: %d\n", a, b, c, d);

    // --- Expression without parentheses ---
    int result1 = a + b * c;
    // Expected: a + (b * c) = 10 + (5 * 2) = 10 + 10 = 20
    // Multiplication has higher precedence than addition

    // --- Expression with parentheses ---
    int result2 = (a + b) * c;
    // Expected: (a + b) * c = (10 + 5) * 2 = 15 * 2 = 30
    // Parentheses change the order of operations

    // Print both results
    printf("Without parentheses (a + b * c): %d\n", result1);
    printf("With parentheses ((a + b) * c): %d\n", result2);

    // --- Complex expression ---
    int result = a + b * c - d / c;
    // Breakdown:
    // Step 1: b * c = 5 * 2 = 10
    // Step 2: d / c = 4 / 2 = 2 (integer division)
    // Step 3: a + 10 - 2 = 10 + 10 - 2 = 18

    printf("Result of a + b * c - d / c: %d\n", result);

    return 0;
}

