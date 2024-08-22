#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];  // Changed from int to char array to store names
    int age;
};

int main() {
    int a, b;
    struct employee s[5], temp;

    // Taking input for employee details
    for (a = 0; a < 5; a++) {
        printf("Enter employee name: ");
        scanf("%s", s[a].name);  // Use %s for string input
        printf("Enter employee age: ");
        scanf("%d", &s[a].age);
    }

    // Sorting employees by name using bubble sort
    for (a = 0; a < 5; a++) {
        for (b = a + 1; b < 5; b++) {
            if (strcmp(s[a].name, s[b].name) > 0) {
                temp = s[a];
                s[a] = s[b];
                s[b] = temp;
            }
        }
    }

    // Displaying sorted employee details
    printf("The sorted list of employees by name is:\n");
    for (a = 0; a < 5; a++) {
        printf("Name: %s\t Age: %d\n\t", s[a].name, s[a].age);
    }

    return 0;
}
