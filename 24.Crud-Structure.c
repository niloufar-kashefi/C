#include <stdio.h>
#include <string.h>

#define MAX_PEOPLE 100 // Maximum number of records allowed

// ================================
// Define a structure to represent a person
// ================================
struct Person {
    int id;              // Unique ID of the person
    char name[50];       // Name of the person
    int age;             // Age
    float height;        // Height in meters
};

// Global array to store people
struct Person people[MAX_PEOPLE];
int count = 0; // Keeps track of how many people are stored

// ================================
// Function: Create a new person
// Parameters: id, name, age, height
// ================================
void createPerson(int id, const char name[], int age, float height) {
    if (count >= MAX_PEOPLE) {
        printf("Error: Storage is full. Cannot add more people.\n");
        return;
    }

    people[count].id = id;
    strcpy(people[count].name, name);
    people[count].age = age;
    people[count].height = height;
    count++; // Increase the number of records

    printf("Person with ID %d created successfully.\n", id);
}

// ================================
// Function: Read and print all people
// ================================
void readPeople() {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    printf("All People:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d\n", people[i].id);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Height: %.2f meters\n\n", people[i].height);
    }
}

// ================================
// Function: Update a person's info by ID
// ================================
void updatePerson(int id, const char newName[], int newAge, float newHeight) {
    int found = 0;

    for (int i = 0; i < count; i++) {
        if (people[i].id == id) {
            strcpy(people[i].name, newName);
            people[i].age = newAge;
            people[i].height = newHeight;
            found = 1;
            printf("Person with ID %d updated successfully.\n", id);
            break;
        }
    }

    if (!found) {
        printf("Person with ID %d not found.\n", id);
    }
}

// ================================
// Function: Delete a person by ID
// ================================
// After deleting, shift the remaining elements to fill the gap
void deletePerson(int id) {
    int found = 0;

    for (int i = 0; i < count; i++) {
        if (people[i].id == id) {
            found = 1;
            // Shift the remaining elements
            for (int j = i; j < count - 1; j++) {
                people[j] = people[j + 1];
            }
            count--;
            printf("Person with ID %d deleted successfully.\n", id);
            break;
        }
    }

    if (!found) {
        printf("Person with ID %d not found.\n", id);
    }
}

// ================================
// Main function to demonstrate CRUD operations
// ================================
int main() {
    // CREATE
    createPerson(1, "Alice", 25, 1.65);
    createPerson(2, "Bob", 30, 1.80);
    createPerson(3, "Charlie", 22, 1.70);

    printf("\n--- After Creation ---\n");
    readPeople();

    // UPDATE
    updatePerson(2, "Bobby", 31, 1.82);
    printf("\n--- After Update (ID 2) ---\n");
    readPeople();

    // DELETE
    deletePerson(1);
    printf("\n--- After Deletion (ID 1) ---\n");
    readPeople();

    return 0;
}
