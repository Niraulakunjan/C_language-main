#include <stdio.h>

int main() {
    int i, arr[10];
    int *ptr[10];

    // Initialize the array
    for (i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }

    // Store the addresses of array elements in the pointer array
    for (i = 0; i < 10; i++) {
        ptr[i] = &arr[i];
    }

    // Display the values and their addresses
    for (i = 0; i < 10; i++) {
        printf("\nValue of arr[%d] is %d stored at address %p", i, arr[i], (int *)ptr[i]);
    }

    return 0;
}
