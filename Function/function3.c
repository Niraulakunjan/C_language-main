//3. Function with No Arguments but Returns a Value
#include <stdio.h>

// Function Declaration
int sum() {
    int num1 = 10, num2 = 20;
    return num1 + num2;
}

// Main Function
int main() {
    int result = sum();  // Function Call
    printf("The sum is: %d\n", result); 
    return 0;
}
