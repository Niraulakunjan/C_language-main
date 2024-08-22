//4. Function with Arguments and Returns a Value
#include <stdio.h>

// Function Declaration
int sum(int num1, int num2) {
    return num1 + num2;
}

// Main Function
int main() {
    int result = sum(10, 20);  // Function Call
    printf("The sum is: %d\n", result);
    return 0;
}
