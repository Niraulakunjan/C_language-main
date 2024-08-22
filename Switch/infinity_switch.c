#include <stdio.h>
#include <stdlib.h> 
int main() 
{
    int a, b, c, ch;
    
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    while (1) {
        #ifdef _WIN32
        system("cls");  // For Windows
#else
        system("clear"); // For Unix/Linux/Mac
#endif
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
    }

    return 0;
}
