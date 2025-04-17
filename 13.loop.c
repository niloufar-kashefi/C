#include <stdio.h>

int main() {
    // Example 1: For Loop
    // This loop will print numbers from 1 to 5.
    printf("For loop example:\n");
    for (int i = 1; i <= 5; i++) {
        // Print the current value of i
        printf("%d ", i);
    }
    printf("\n");

    // Example 2: While Loop
    // This loop will print numbers from 1 to 5.
    printf("While loop example:\n");
    int j = 1; // Initialize the variable
    while (j <= 5) {
        // Print the current value of j
        printf("%d ", j);
        j++; // Increment j by 1 after each iteration
    }
    printf("\n");

    // Example 3: Do-While Loop
    // This loop will print numbers from 1 to 5.
    printf("Do-while loop example:\n");
    int k = 1; // Initialize the variable
    do {
        // Print the current value of k
        printf("%d ", k);
        k++; // Increment k by 1 after each iteration
    } while (k <= 5); // Check condition at the end of the loop
    printf("\n");

    return 0;
}

