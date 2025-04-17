#include <stdio.h>    // For printf and scanf

int main() {
    char grade;

    // Ask the user to enter a grade (A, B, C, D, F)
    printf("Enter your grade (A, B, C, D, F): ");
    scanf("%c", &grade);  // Read the input character

    // --- Switch statement ---
    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;  // Exit the switch after printing the message
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("Fair\n");
            break;
        case 'D':
            printf("Needs Improvement\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            // If the entered grade is invalid
            printf("Invalid grade entered!\n");
    }

    return 0;
}

