#include <stdio.h>
// Function prototype/// PLANING OF FUN
int sum(int, int);

int main(){
    int a = 1;
    int b = 2;
    int result = sum(a, b); // Function call

    printf("The sum is %d\n", result);

    return 0;
}
// Function definition
int sum(int x, int y){
    return x + y;
}

