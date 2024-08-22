#include <stdio.h>

int main() // Use 'int main()' instead of 'void main()' for standard compliance
{
    int num;

    Lab: // First label
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 100) {
        printf("Mark can't be less than 100.\n");
        goto Lab; // If the number is less than 100, repeat the input process
    }

    // Additional operations or checks can be added here
    Lab2: // Second label
    printf("You entered a valid mark: %d\n", num);

    // Example condition to jump back to the second label
    if (num == 100) {
        printf("Exactly 100! Let's confirm.\n");
        goto Lab2; // This is just an example; it loops if the number is exactly 100
    }

    printf("Proceeding with the valid mark.\n");

    return 0; // Return 0 for successful execution
}
