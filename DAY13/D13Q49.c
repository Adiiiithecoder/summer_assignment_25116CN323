#include <stdio.h>

int main() {
    int size = 5;
    int arr[5];

    // Simulating user input values manually to make it "ready-to-run" without typing 
    printf("Enter 5 elements:\n");
    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10; // Fills array with 10, 20, 30, 40, 50
        printf("%d ", arr[i]); 
    }
    
    printf("\nDisplaying Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }
    return 0;
}
