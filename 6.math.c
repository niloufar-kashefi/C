#include <stdio.h>     // For printf
#include <math.h>      // For math functions like sqrt, abs, pow, etc.

int main() {
    // --- Using math functions ---
    
    // sqrt(x) : Returns the square root of x
    printf("sqrt is: %.2f\n", sqrt(64)); // Expected: 8.00
    
    // abs(x) : Returns the absolute value of x
    printf("abs is: %d\n", abs(-64));   // Expected: 64
    
    // pow(base, exponent) : Returns base raised to the power of exponent
    printf("pow is: %.0f\n", pow(2, 10)); // Expected: 1024

    // ceil(x) : Returns the smallest integer greater than or equal to x
    printf("ceil is: %.2f\n", ceil(3.6));  // Expected: 4.00
    
    // floor(x) : Returns the largest integer less than or equal to x
    printf("floor is: %.2f\n", floor(-3.6)); // Expected: -4.00
    
    // trunc(x) : Removes the decimal part of x (truncates towards zero)
    printf("trunc is: %.2f\n", trunc(-3.6)); // Expected: -3.00
    
    // log10(x) : Returns the base 10 logarithm of x
    printf("log10 is: %.2f\n", log10(100)); // Expected: 2.00
    
    // log2(x) : Returns the base 2 logarithm of x
    printf("log2 is: %.2f\n", log2(32));   // Expected: 5.00
    
    // max(x, y) : Returns the maximum of x and y
    printf("max is: %d\n", fmax(10, 55));  // Expected: 55
    
    // min(x, y) : Returns the minimum of x and y
    printf("min is: %d\n", fmin(10, 20));  // Expected: 10

    return 0;
}

