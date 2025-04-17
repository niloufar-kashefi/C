#include <stdio.h>    // For printf and scanf

int main() {
    int score;

    // Ask the user to enter their score (between 0 and 100)
    printf("Enter your score (0-100): ");
    scanf("%d", &score);  // Read the input number

    // --- Switch statement with score divided by 10 ---
    switch (score / 10) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;  // Exit after printing the grade
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:
            // For any score below 60, grade F
            printf("Grade: F\n");
    }

    return 0;
}
