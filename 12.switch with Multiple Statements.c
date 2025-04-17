#include <stdio.h>    // For printf and scanf

int main() {
    char operation;
    float num1, num2;

    // Ask the user to enter an operation (+, -, *, /)
    printf("Enter operation (+, -, *, /): ");
    scanf("%c", &operation);  // Read the operation (use space before %c to avoid issues)

    // Ask the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);  // Read two floating point numbers

    // --- Switch statement for operations ---
    switch (operation) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);  // Addition
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);  // Subtraction
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);  // Multiplication
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2f\n", num1 / num2);  // Division
            } else {
                printf("Error: Division by zero is not allowed!\n");  // Handle division by zero
            }
            break;
        default:
            // If an invalid operation is entered
            printf("Invalid operation entered!\n");
    }

    return 0;
}

