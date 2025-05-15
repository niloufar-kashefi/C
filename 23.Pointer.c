#include <stdio.h>

int main() {
    // ==========================
    // 1. Define a simple integer variable
    // ==========================
    int x = 42;  // A normal integer variable

    // ==========================
    // 2. Define a pointer and assign the address of the variable
    // ==========================
    int* ptr = &x;  // Declare a pointer to int and initialize it with the address of x

    // ==========================
    // 3. Display values and addresses
    // ==========================
    printf("Value of x: %d\n", x);             // Prints the value of x (42)
    printf("Address of x: %p\n", &x);          // Prints the address of x in memory
    printf("Value of ptr: %p\n", ptr);         // Pointer value (which is the address of x)
    printf("Value at *ptr: %d\n", *ptr);       // Dereferencing ptr gives the value stored at address of x (42)

    // ==========================
    // 4. Modify the value of x using the pointer
    // ==========================
    *ptr = 100;  // Changes the value of x via the pointer
    printf("New value of x after using *ptr: %d\n", x);  // Should now print 100

    // ==========================
    // 5. Pointer to an array
    // ==========================
    int arr[5] = { 10, 20, 30, 40, 50 };  // Declare an array
    int* arrPtr = arr; // In C, the name of an array is a pointer to its first element

    printf("\nAccessing array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        // *(arrPtr + i) gives the value at index i
        printf("arr[%d] = %d\n", i, *(arrPtr + i));
    }


    return 0;
}
