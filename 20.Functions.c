#include <stdio.h>

// Step 1: A Simple Void Function
void sayHello() {
    printf("Hello, welcome to the C function tutorial!\n");
}

// Step 2: Function with Parameters and Return
int addTwoNumbers(int a, int b) {
    return a + b;
}

// Step 3: Function that Returns a Different Type (e.g., char)
char getGrade(int score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else return 'D';
}

// Step 4: Function with Multiple Parameters of Different Types
float calculateRectangleArea(float length, float width) {
    return length * width;
}


int main() {

    // Step 1: Simple Void Function
    printf("\nStep 1: Simple Void Function\n");
    sayHello();

    // Step 2: Function with Parameters and Return
    printf("\nStep 2: Function with Parameters and Return\n");
    int sum = addTwoNumbers(3, 4);
    printf("Sum of 3 and 4: %d\n", sum);

    // Step 3: Function Returning Different Type
    printf("\nStep 4: Function Returning Different Type\n");
    printf("Grade for score 85: %c\n", getGrade(85));

    // Step 4: Function with Multiple Parameters of Different Types
    printf("\nStep 5: Function with Multiple Parameters\n");
    printf("Rectangle area (5.5 x 3.2): %.2f\n", calculateRectangleArea(5.5f, 3.2f));

    return 0;
}
