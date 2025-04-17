#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d\t", i * j); // Print product with tab separation
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
