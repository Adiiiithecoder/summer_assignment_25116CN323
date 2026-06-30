#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Save the last element
    int last = arr[size - 1];

    // Shift everything one slot to the right
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Place the saved last element at the front
    arr[0] = last;

    printf("Array after right rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
