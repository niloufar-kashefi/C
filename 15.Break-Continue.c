#include <stdio.h>

int main() {
    // Example 1: For Loop with break
    printf("For loop with break:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Exit loop when i is equal to 5
        }
        printf("%d ", i); // Print numbers until 4
    }
    printf("\n");

    // Example 2: For Loop with continue
    printf("For loop with continue:\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        printf("%d ", i); // Print only
    }

return 0;
    }
