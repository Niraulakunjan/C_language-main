#include <stdio.h>

int main() {
    char names[5][50];
    int roll_numbers[5];

    // Input for students' names and roll numbers
    for (int i = 0; i < 5; i++) {
        printf("Enter full name for student %d: ", i + 1);
        fgets(names[i], 50, stdin);// for sapce in names

        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &roll_numbers[i]);
        getchar();  // Clear the newline character after entering roll number
    }

    // Displaying the names and roll numbers
    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: Name: %sRoll Number: %d\n", i + 1, names[i], roll_numbers[i]);
    }

    return 0;
}
