#include <stdio.h>     // For printf
#include <stdbool.h>   // For bool, true, false

int main() {
    // --- Arithmetic Operators ---
    int a = 10;
    int b = 5;

    printf("a is: %d and b is: %d\n", a, b);

    int sum = a + b;         // Addition
    int diff = a - b;        // Subtraction
    int product = a * b;     // Multiplication
    int quotient = a / b;    // Division
    int remainder = a % b;   // Modulus (remainder)

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    // --- Assignment Operators ---
    int x = 10;     // Simple assignment
    x += 5;         // x = x + 5
    printf("Value of x after += 5: %d\n", x);
    x *= 2;         // x = x * 2
    printf("Value of x after *= 2: %d\n", x);

    // --- Comparison Operators ---
    printf("a == b: %s\n", (a == b) ? "true" : "false"); // Equal to
    printf("a != b: %s\n", (a != b) ? "true" : "false"); // Not equal to
    printf("a > b: %s\n",  (a > b)  ? "true" : "false"); // Greater than
    printf("a < b: %s\n",  (a < b)  ? "true" : "false"); // Less than
    printf("a >= b: %s\n", (a >= b) ? "true" : "false"); // Greater than or equal to
    printf("a <= b: %s\n", (a <= b) ? "true" : "false"); // Less than or equal to

    // --- Logical Operators ---
    bool c = true;
    bool d = false;

    printf("c is: %s and d is: %s\n", c ? "true" : "false", d ? "true" : "false");
    printf("c && d: %s\n", (c && d) ? "true" : "false");  // Logical AND
    printf("c || d: %s\n", (c || d) ? "true" : "false");  // Logical OR
    printf("!c: %s\n", (!c) ? "true" : "false");          // Logical NOT

    return 0;
}

