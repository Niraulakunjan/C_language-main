//2. Function with Arguments but No Return Value
#include <stdio.h>

// Function Declaration
void sum(int num1, int num2) {
    int sum = num1 + num2;
 printf("The sum is: %d\n", sum);
}

// Main Function
int main() {
    sum(10, 20);// Function Call
    return 0;
}
