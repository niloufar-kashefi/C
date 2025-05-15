#include <stdio.h>
#include <string.h>

// ================================
// 1. Define a structure (struct)
// ================================
// A structure is a user-defined data type that allows grouping variables
// of different types into one unit.

struct Person {
    char name[50];     // A string (array of characters) to store the person's name
    int age;           // An integer to store the person's age
    float height;      // A float to store the person's height in meters
};

// ================================
// 2. Function to print a Person
// ================================
// This function takes a struct Person as input and prints its fields
// Parameter:
// - p: a struct Person passed by value
void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f meters\n", p.height);
}

// ================================
// 3. Function to return a new Person
// ================================
// This function creates and returns a struct Person
// Parameters:
// - name: string (char array) representing person's name
// - age: integer value
// - height: float value
// Returns: struct Person with initialized fields
struct Person createPerson(const char name[], int age, float height) {
    struct Person p;
    strcpy(p.name, name);  // Copy the name to the struct's name field
    p.age = age;
    p.height = height;
    return p;
}

int main() {
    // ================================
    // 4. Declare and assign values manually
    // ================================
    struct Person person1;

    // Assign values to members using dot operator (.)
    strcpy(person1.name, "Alice");  // Copy string into char array
    person1.age = 25;
    person1.height = 1.65;

    printf("Person 1:\n");
    printPerson(person1);

    printf("\n");

    // ================================
    // 5. Declare and initialize in one step
    // ================================
    struct Person person2 = {"Bob", 30, 1.80};  // Initialize with values

    printf("Person 2:\n");
    printPerson(person2);

    printf("\n");

    // ================================
    // 6. Use array of structs
    // ================================
    struct Person people[2];  // Array to store 2 Person structs

    // Assign values to array elements
    strcpy(people[0].name, "Charlie");
    people[0].age = 22;
    people[0].height = 1.70;

    strcpy(people[1].name, "Diana");
    people[1].age = 28;
    people[1].height = 1.60;

    printf("People in array:\n");
    for (int i = 0; i < 2; i++) {
        printf("Person %d:\n", i + 1);
        printPerson(people[i]);
        printf("\n");
    }

    // ================================
    // 7. Use function to create and return a struct
    // ================================
    struct Person person3 = createPerson("Eve", 21, 1.75);
    printf("Person 3 (from function):\n");
    printPerson(person3);

    return 0;
}
