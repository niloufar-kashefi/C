#include <stdio.h>    // For printf

int main() {
    // --- Newline (\n) ---
    // \n moves the cursor to the beginning of the next line.
    printf("Hello,\nWorld!\n");  // Outputs: Hello on one line and World! on the next line
    
    // --- Tab (\t) ---
    // \t inserts a horizontal tab, which typically adds 4 or 8 spaces.
    printf("Column1\tColumn2\tColumn3\n");  // Columns separated by tabs
    
    // --- Carriage Return (\r) ---
    // \r moves the cursor back to the beginning of the line, overwriting characters.
    printf("12345\rABCDE\n");  // The output will display "ABCDE" instead of "12345"

    return 0;
}

