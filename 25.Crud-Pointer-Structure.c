
#include <stdio.h>
#include <string.h>

#define MAX 100

// Define the Student structure
struct Student {
    int id;
    char name[50];
    float average;
};

// Global student array
struct Student students[MAX];

// Functions
void createStudent(struct Student *students, int *count) {
    if (*count >= MAX) {
        printf("Capacity is full.\n");
        return;
    }
    printf("\nCreate New Student\n");
    printf("Student ID: ");
    scanf("%d", &students[*count].id);
    printf("Name: ");
    scanf("%s", students[*count].name);
    printf("Average: ");
    scanf("%f", &students[*count].average);
    (*count)++;
    printf("Student added.\n");
}

void readStudents(struct Student *students, int *count) {
    if (*count == 0) {
        printf("No students to display.\n");
        return;
    }
    printf("\nList of Students:\n");
    for (int i = 0; i < *count; i++) {
        printf("ID: %d | Name: %s | Average: %.2f\n",
               students[i].id, students[i].name, students[i].average);
    }
}

void updateStudent(struct Student *students, int *count) {
    int id;
    printf("\nEnter the student ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < *count; i++) {
        if (students[i].id == id) {
            printf("New name: ");
            scanf("%s", students[i].name);
            printf("New average: ");
            scanf("%f", &students[i].average);
            printf("Information updated.\n");
            return;
        }
    }
    printf("Student with this ID was not found.\n");
}

void deleteStudent(struct Student *students, int *count) {
    int id;
    printf("\nEnter the student ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < *count; i++) {
        if (students[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }
            (*count)--;
            printf("Student deleted.\n");
            return;
        }
    }
    printf("Student with this ID was not found.\n");
}

int main() {
    int choice;
    int count = 0; // شمارنده محلی، ولی اشاره‌گرش به توابع ارسال می‌شود

    while (1) {
        printf("\n--- Main Menu ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Edit Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createStudent(students, &count);
                break;
            case 2:
                readStudents(students, &count);
                break;
            case 3:
                updateStudent(students, &count);
                break;
            case 4:
                deleteStudent(students, &count);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid option.\n");
        }
    }

    return 0;
}
