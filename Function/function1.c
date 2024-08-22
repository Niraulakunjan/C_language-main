//1. Function with No Arguments and No Return Value
#include <stdio.h>

// Function Declaration
void sum() { // no argument inside ()
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    printf("The sum is: %d\n", sum); // no return value print in user defined function
}

// Main Function
int main() {
    sum();  // Function Call
    return 0;
}