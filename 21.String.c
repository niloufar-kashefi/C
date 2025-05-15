#include <stdio.h>      // For standard input/output functions
#include <string.h>     // For string manipulation functions like strlen, strcpy, strcmp, etc.
#include <stdlib.h>     // For memory functions (not used here, but useful to know)

int main() {
    // ==========================
    // 1. String Initialization
    // ==========================
    printf("1. String Initialization\n");

    // In C, strings are character arrays ending with a null character '\0'

    char str1[] = "Hello, world!";  // Initialize with string literal
    printf("str1: %s\n", str1);

    char str2[100] = "";            // Empty string with size 100
    printf("str2: %s\n", str2);

    // Creating a string of repeated characters (5 times 'A')
    char str3[6]; // 5 characters + 1 for '\0'
    for (int i = 0; i < 5; i++) {
        str3[i] = 'A';
    }
    str3[5] = '\0';  // Always terminate strings with null character
    printf("str3: %s\n", str3);

    printf("\n");

    // ==========================
    // 2. Accessing Characters in a String
    // ==========================
    printf("2. Accessing Characters\n");

    // Access using index
    printf("First character of str1: %c\n", str1[0]);
    printf("Character at index 7 of str1: %c\n", str1[7]);

    // Modify a character
    str1[7] = 'W'; // Change lowercase 'w' to uppercase 'W'
    printf("Modified str1: %s\n", str1);

    printf("\n");

    // ==========================
    // 3. String Concatenation
    // ==========================
    printf("3. String Concatenation\n");

    char str4[100] = "Hello";
    char str5[] = "World";

    // -------------------------
    // strcpy(destination, source)
    // Copies source string into destination.
    // The destination must be large enough.
    // -------------------------
    char result[200];
    strcpy(result, str4);

    // -------------------------
    // strcat(destination, source)
    // Appends source to the end of destination.
    // The destination must have enough space.
    // -------------------------
    strcat(result, " ");
    strcat(result, str5);

    printf("Concatenation using strcat: %s\n", result);

    // Direct append to str4 (careful: str4 must have extra space)
    strcat(str4, " ");
    strcat(str4, str5);
    printf("Direct append to str4: %s\n", str4);

    printf("\n");

    // ==========================
    // 4. String Length
    // ==========================
    printf("4. String Length\n");

    // -------------------------
    // strlen(string)
    // Returns the number of characters in the string,
    // excluding the null character '\0'.
    // -------------------------
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));
    printf("Length of str3: %lu\n", strlen(str3));

    printf("\n");

    // ==========================
    // 5. Substring
    // ==========================
    printf("5. Substring\n");

    // -------------------------
    // strncpy(destination, source + startIndex, length)
    // Copies 'length' characters from source (starting at startIndex)
    // into destination. Always null-terminate manually.
    // -------------------------
    char subStr[10];
    strncpy(subStr, str1 + 2, 3);  // Copy 3 chars from index 2
    subStr[3] = '\0';              // Null terminate manually
    printf("Substring of str1 (index 2, length 3): %s\n", subStr);

    printf("\n");

    // ==========================
    // 6. Comparing Strings
    // ==========================
    printf("6. Comparing Strings\n");

    char str6[] = "apple";
    char str7[] = "banana";

    // -------------------------
    // strcmp(str1, str2)
    // Compares two strings:
    // - Returns 0 if they are equal
    // - <0 if str1 comes before str2 lexicographically
    // - >0 if str1 comes after str2
    // -------------------------
    if (strcmp(str6, str7) == 0) {
        printf("str6 is equal to str7\n");
    } else {
        printf("str6 is not equal to str7\n");
    }

    if (strcmp(str6, str7) < 0) {
        printf("str6 is lexicographically less than str7\n");
    }

    printf("\n");

    // ==========================
    // 7. Using fgets() for Input
    // ==========================
    printf("7. Using fgets() for Input\n");

    // -------------------------
    // fgets(destination, size, stdin)
    // Reads a full line from standard input including spaces.
    // It stops when either a newline is read or (size - 1) chars are read.
    // -------------------------
    char fullLine[200];
    printf("Enter a full sentence: ");
    fgets(fullLine, sizeof(fullLine), stdin);

    // -------------------------
    // strcspn(string, "\n")
    // Returns the index of the first '\n' character.
    // We use this to remove the newline character.
    // -------------------------
    fullLine[strcspn(fullLine, "\n")] = '\0';
    printf("You entered: %s\n", fullLine);

    printf("\n");

    return 0;
}
