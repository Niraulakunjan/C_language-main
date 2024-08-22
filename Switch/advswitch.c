#include <stdio.h>
#include <stdlib.h> // Needed for the system() function

int main() 
{
    int a, b, c, ch;
    char continueProgram;

    while (1) { // Loop to restart the program
        printf("Enter 1st number: ");
        scanf("%d", &a);
        printf("Enter 2nd number: ");
        scanf("%d", &b);

        while (1) {
            printf("\nChoose any number for calculation:");
            printf("\n1. Sum");
            printf("\n2. Difference");
            printf("\n3. Product");
            printf("\n4. Division");
            printf("\n5. Exit");
            printf("\nEnter your choice: ");
            scanf("%d", &ch);

            switch (ch)
            {
            case 1:
                c = a + b;
                printf("\nThe sum of the two numbers is: %d\n", c);
                break;
            case 2:
                c = a - b;
                printf("\nThe difference of the two numbers is: %d\n", c);
                break;
            case 3:
                c = a * b;
                printf("\nThe product of the two numbers is: %d\n", c);
                break;
            case 4:
                if (b != 0) {
                    c = a / b;
                    printf("\nThe division of the two numbers is: %d\n", c);
                } else {
                    printf("\nError: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                return 0; 
            default:
                printf("\nPlease choose a valid option between 1 to 5.\n");
                break;
            }
            
            // Ask the user if they want to continue
            printf("\nDo you want to continue with the same numbers? (y/n): ");
            scanf(" %c", &continueProgram);

            if (continueProgram == 'y' || continueProgram == 'Y') {
                // Clear the screen
#ifdef _WIN32
                system("cls");  // For Windows
#else
                system("clear"); // For Unix/Linux/Mac
#endif
                continue; // Continue with the loop
            } else if (continueProgram == 'n' || continueProgram == 'N') {
                break; // Break out of the inner loop to restart the program
            }
        }

        // Optional: clear the screen before restarting the program
#ifdef _WIN32
        system("cls");  // For Windows
#else
        system("clear"); // For Unix/Linux/Mac
#endif
    }

    return 0;
}
