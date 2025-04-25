#include <stdio.h>

int main() {
    // ================================
    // 1. Simple array definition
    // ================================
    printf("1. Simple array definition\n");

    // Define an integer array with 5 elements
    int numbers[5];  // Elements are uninitialized (contain garbage values)

    // Manually initialize some elements
    numbers[0] = 10;
    numbers[1] = 20;

    // Print all elements (some uninitialized)
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    printf("\n");

    // ================================
    // 2. Initialization at declaration
    // ================================
    printf("2. Initialization at declaration\n");

    // Full initialization
    int fullInit[4] = {1, 2, 3, 4};

    // Partial initialization (rest will be set to 0)
    int partialInit[6] = {5, 10};

    // Print fullInit
    printf("fullInit:\n");
    for (int i = 0; i < 4; i++) {
        printf("fullInit[%d] = %d\n", i, fullInit[i]);
    }

    // Print partialInit
    printf("partialInit:\n");
    for (int i = 0; i < 6; i++) {
        printf("partialInit[%d] = %d\n", i, partialInit[i]);
    }

    printf("\n");

    // ================================
    // 3. Defining without specifying size
    // ================================
    printf("3. Defining array without specifying size\n");

    // Compiler infers the size from number of elements
    int autoSized[] = {10, 20, 30, 40};

    // Calculate size using sizeof
    int size = sizeof(autoSized) / sizeof(autoSized[0]);

    for (int i = 0; i < size; i++) {
        printf("autoSized[%d] = %d\n", i, autoSized[i]);
    }

    printf("Size of autoSized array = %d\n", size);
    printf("\n");

    // ================================
    // 4. Loop-based input and output
    // ================================
    printf("4. Loop-based input and output\n");

    int userArray[5];

    // Take input from user
    for (int i = 0; i < 5; i++) {
        printf("Enter number for index %d: ", i);
        scanf("%d", &userArray[i]);
    }

    // Print values
    printf("userArray:\n");
    for (int i = 0; i < 5; i++) {
        printf("userArray[%d] = %d\n", i, userArray[i]);
    }

    printf("\n");

    // ================================
    // 5. Multi-dimensional arrays (Matrix)
    // ================================
    printf("5. Multi-dimensional arrays (Matrix)\n");

    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Print matrix elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    printf("\n");

    // ================================
    // 6. Special cases and common mistakes
    // ================================
    printf("6. Special cases and common mistakes\n");

    // Accessing out-of-bounds index (undefined behavior)
    printf("Accessing an out-of-bounds index:\n");
    printf("numbers[10] = %d (Unsafe!)\n", numbers[10]);  // May run, but not reliable

    // Invalid array size
    // int invalidArray[0]; // Compilation error: size cannot be zero

    // Over-initialization
    // int smallArray[2] = {1, 2, 3}; // Error: too many initializers

    return 0;
}
