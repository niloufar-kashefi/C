#include <stdio.h>  // Required for input/output functions like printf and scanf

int main() {
    int a;  // Declare an integer variable to store user input

    // Prompt the user to enter a value
    printf("Enter a: ");
    
    // Read the integer input from the user
    scanf("%d", &a);  // %d is the format specifier for int, &a passes the address of 'a'

    int b;  // Declare another integer variable to store the result
    b = a * 2;  // Multiply 'a' by 2 and store the result in 'b'

    // Output the result
    printf("%d\n", b);  // Print the value of 'b' to the console

    return 0;  // Return 0 to indicate successful execution
}

