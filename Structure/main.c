#include <stdio.h>
#include <string.h>

int main() {
    struct student {
        int roll;
        char name[30];
        char section;
        float height;
    } s1;

    printf("\nEnter roll number: ");
    scanf("%d", &s1.roll);

    getchar(); // To consume the newline left by scanf

    printf("\nEnter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    //  remove the newline character from name
    s1.name[strcspn(s1.name, "\n")] = '\0';

    printf("\nEnter section: ");
    scanf("%c", &s1.section);

    printf("\nEnter height: ");
    scanf("%f", &s1.height);

    printf("\nYou have entered:\n");
    printf("Roll Number: %d, Name: %s, Section: %c, Height: %.2f\n",
           s1.roll, s1.name, s1.section, s1.height);

    return 0;
}
