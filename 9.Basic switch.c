#include <stdio.h>    // For printf and scanf

int main() {
    int day;

    // Ask the user to enter a number between 1 and 7 to display the day of the week
    printf("Enter a number (1-7) to display the day of the week: ");
    scanf("%d", &day);  // Read the input number

    // --- Switch statement ---
    switch (day) {
        case 1:
            printf("Monday\n");
            break;  // Exit the switch statement after printing the result
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            // If the input is not between 1 and 7
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}

